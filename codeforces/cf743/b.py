n,k=map(int,input().split())
soln=1
while(k>0):
	if k & 1 == 1:
		break
	k=k>>1
	soln+=1
print(soln)