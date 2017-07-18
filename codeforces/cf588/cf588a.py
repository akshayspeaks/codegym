import sys

n=int(sys.stdin.readline())
a=[]
p=[]
for it in range(n):
	ai,pi=map(int,(sys.stdin.readline().split()))
	a.append(ai)
	p.append(pi)
cost=p[0]*a[0]
currmin=p[0]
for i in range(1,n):
	currmin=min(p[i],currmin)
	cost+=a[i]*currmin
print(cost)
