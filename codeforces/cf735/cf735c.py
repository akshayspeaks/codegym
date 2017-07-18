n=int(input())
t=0
tem=n
while(tem!=0):
	tem=tem>>1
	t+=1
if (n & (n-1))!=0:
	print(t)
else:
	print(t-1)