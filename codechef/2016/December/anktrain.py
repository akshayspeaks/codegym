import sys
t=int(sys.stdin.readline())
adj=[3,3,3,-3,-3,-3,1,-1]
suff=["LB","MB","UB","LB","MB","UB","SU","SL"]
for test in range(t):
	b=int(sys.stdin.readline())
	print(str(b+adj[b%8-1])+suff[b%8-1])