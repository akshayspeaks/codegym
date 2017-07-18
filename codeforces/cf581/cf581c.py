from operator import itemgetter
import sys
n,k=map(int,input().split())
inpt =list(map(int,(sys.stdin.readline().split(' '))))
arr=[]
for it in range(n):
	arr.append([inpt[it],10-inpt[it]%10])
arr.sort(key=itemgetter(1))
#print(arr)
for it in range(n):
	if(k<arr[it][1]):
		break
	k-=arr[it][1]
	arr[it][0]+=arr[it][1]
	arr[it][1]=0
arr.sort(key=itemgetter(0))
it=0
#print(arr,k)

while(k>10 and it<n):
	if(arr[it][0]==100):
		break
	fa=min(k,100-arr[it][0])
	k-=fa
	arr[it][0]+=fa
	it+=1
ans=0
for it in arr:
	ans+=int(it[0]/10)
#print(arr)
print(ans)
