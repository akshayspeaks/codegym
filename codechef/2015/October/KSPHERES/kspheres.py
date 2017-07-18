__author__ = 'messi'

import sys
n,m,c=map(int,sys.stdin.readline().split())
spheres={}
upper=[]
lower=[]
upper=list(map(int,sys.stdin.readline().split()))
lower=list(map(int,sys.stdin.readline().split()))
for num in upper:
	occ=lower.count(num)
	if(occ==0):
		continue
	if num in spheres:
		spheres[num]*=2
	else:
		spheres[num]=occ
print((spheres.values()))
soln={}
val=list(spheres.values())
ans=1
for el in val:
	ans*=el
base=ans
for i in range(len(val)):
	val[i]=1/val[i]
splen=len(spheres)
soln[splen-1]=ans
print(val)
for i in range(splen-2,0,-1):
	sm=sum(val)
	#soln[i]=base*sm
	for j in range(splen):
		val[j]*=(sm-val[j])
	print(val)
	soln[i]=base*sm
print(soln)
