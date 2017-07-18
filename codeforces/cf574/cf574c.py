def divby(m):
	for k in range(len(arr)):
		while((arr[k]%m)==0):
			arr[k]/=m

def issame():
	return len(set(arr)) <= 1

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
divby(2)
divby(3)
if issame():
	print("Yes")
else:
	print("No")