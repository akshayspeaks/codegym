# your code goes here

t=int(input())
for i in range(t):
	a,b=map(int,input().split())
	
	count=0
	
	while not(a==b):
		if(a>b):
			a=int(a/2)
		else:
			b=int(b/2)
		count+=1
	print (count)