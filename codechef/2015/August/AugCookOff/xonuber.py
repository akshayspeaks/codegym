t=int(input())
for it in range(t):
	n=int(input())
	ans=-1
	if n==1:
		ans=2
	elif not((n+1)&n):
		ans= n >> 1
	print(ans)