import sys

def construct_tree(low,high,pos):
	if (low==high):
		seg[pos]=arr[low]
		return
	mid=int((low+high)/2)
	construct_tree(low,mid,2*pos+1)
	construct_tree(mid+1,high,2*pos+2)
	seg[pos]=max(seg[2*pos+1],seg[2*pos+2])

def range_max_query(low,high,pos):
	if(qlow<=low and qhigh>=high):
		return seg[pos]
	if(qlow>high or qhigh<low):
		return 0
	mid=int((low+high)/2)
	return max(range_max_query(low,mid,2*pos+1),range_max_query(mid+1,high,2*pos+2))	

n,m = map(int, sys.stdin.readline().split(' '))

arr=list(map(int, sys.stdin.readline().split(' ')))

temp=n
no_of_seg_nodes=1
if((n&(n-1))==0):
	no_of_seg_nodes=(n*2)-1
else:
	no_of_seg_nodes=(n*4)-1
	
seg=[0]*no_of_seg_nodes
qlow=0
qhigh=0
l=0
h=len(arr)
construct_tree(l,h-1,0)
#print(seg)
farr=[]
for i in range(n):
	for j in range(n-i):
		qlow=i
		qhigh=n-j-1
		farr.append(range_max_query(l,h-1,0))
farr.sort()
ans=[]
players=['D','C']
for q in range(m):
	que=list(sys.stdin.readline().split())
	if(que[0]=='>'):
		try:
			freq=farr[::-1].index(int(que[1]))
		except ValueError:
			freq=0
	elif(que[0]=='<'):
		try:
			freq=farr.index(int(que[1]))
		except ValueError:
			freq=0
	else:
		try:
			freq=len(farr)-farr[::-1].index(int(que[1]))
			freq-=farr.index(int(que[1]))
		except ValueError:
			freq=0
		
	if (que[2]=='D'):
		ans.append(players[(freq+1)%2])
	else:
		ans.append(players[(freq)%2])
print (''.join(ans))