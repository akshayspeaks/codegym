l1,r1,l2,r2,k=map(int,input().split())
st=max(l1,l2)
en=min(r1,r2)
cmin=en-st+1
if st<=k and k<=en:
	cmin-=1
print (max(0,cmin))