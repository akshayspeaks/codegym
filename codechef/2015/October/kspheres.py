import sys
def vieta_coef(li):
	n=len(li)
	coef=[0]*(n+1)
	coef[0]=-1*(li[0])
	coef[1]=1
	for k in range(2,n+1):
		coef[k]=1
		for i in range(k-2,-1,-1):
			coef[i+1]=coef[i]-(li[k-1]*coef[i+1])
		coef[0]=-1*li[k-1]*coef[0]
	
	
	return (coef)

mod=1000000007
n,m,c=map(int,sys.stdin.readline().split())
spheres={}
upper=[]
lower=[]
upper=list(map(int,sys.stdin.readline().split()))
lower=list(map(int,sys.stdin.readline().split()))
if n>m:
	upper,lower=lower,upper
	n,m=m,n
for num in upper:
	if num in spheres:
		continue
	comb=lower.count(num)*upper.count(num)
	if not(comb==0):
		spheres[num]=comb
#print((spheres.values()))
soln=list(spheres.values())
coef=vieta_coef(soln)
coef.pop()
coef.pop()
#print(coef)
coef.reverse()
count=1
for el in coef:
	print((abs(el))%mod,end=' ')

ln=len(soln)
while(ln<=c):
	ln+=1
	print(0,end=' ')