from fractions import *
def hasPrimefac(a,b):
	if (b==1):
		return True
	d=gcd(a,b)
	if(d==1):
		return False
	return hasPrimefac(a,b/d)

t=int(input())
for x in range(t):
	a,b=map(int,input().split())
	if hasPrimefac(a,b):
		print("Yes")
	else:
		print("No")