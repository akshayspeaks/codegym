import sys
tests=int(sys.stdin.readline())
def getbin(res):
	a=''
	while res!=0:
		if(res&1==1):
			a='1'+a
		else:
			a='0'+a
		res=int(res/10)
	return a
def trimfat(res):
	if('1' in res):
		res=res.lstrip('0')
	else:
		res="0"
	return res
def handleIt(ch,res):
	if(ch=='+'):
		res=trimfat(getbin(int(res)))
		if res in d:
			d[res]+=1
		else:
			d[res]=1
	elif(ch=="-"):
		res=trimfat(getbin(int(res)))
		if d[res]==1:
			d.pop(res)
		else:
			d[res]-=1
	else:
		if(trimfat(res) in d):
			print(d[trimfat(res)])
		else:
			print(0)
	# print(d)

d={}

for test in range(tests):
	ch,res=sys.stdin.readline().split()

	handleIt(ch,res)