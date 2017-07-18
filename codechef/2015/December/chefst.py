import sys
t=int(sys.stdin.readline())
for tests in range(t):
	a,b,m=map(int,input().split())
	if (a>b):
		a,b=b,a
	mx=(m*(m+1))/2
	if(mx>=a):
		print (int(b-a))
	else:
		print (int((a+b)-2*mx))