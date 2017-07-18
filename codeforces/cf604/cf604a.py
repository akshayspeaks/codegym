import sys
m=list(map(int,sys.stdin.readline().split()))
w=list(map(int,sys.stdin.readline().split()))
s,u=map(int,sys.stdin.readline().split())
score=0
for it in range(5):
	score+=max(0.3*500*(it+1),((1-m[it]/250)*500*(it+1))-50*w[it])
score+=100*s-50*u
print (int(score))