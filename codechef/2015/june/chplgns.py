from operator import itemgetter
t=int(input())
for i in range(t):
	n=int(input())
	xseq=[]
	for j in range(n):
		v=int(input())
		vert=list(map(int,input().split()))
		xseq.append([max(vert[::2]),j+1,0])
	xseq.sort(key=itemgetter(0))
	for j in range(n):
		xseq[j][2]=j
	xseq.sort(key=itemgetter(1))
	for j in range(n-1):
		print(xseq[j][2],end=" ")
	print (xseq[n-1][2])