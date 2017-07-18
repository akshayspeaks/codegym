t=int(input())
for it in range(t):
	n,h=map(int,input().split())
	arr=[0]*n
	
	for i in range(n):
		low,high=map(int,input().split())

		#To be Optimised
		for j in range(low,high+1):
			arr[j]+=1
		#..............
	#print(arr)
	mxsum=0
	for j in range(0,h):
		mxsum+=arr[j]
	for j in range(h,n):
		sm=mxsum
		sm+=arr[j]-arr[j-h]
		#print (sm)
		if sm>mxsum:
			mxsum=sm
		
	print((n*h)-mxsum)