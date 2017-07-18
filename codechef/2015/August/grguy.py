# your code goes here
t=int(input())
for j in range(t):
	l1=input()
	l2=input()
	ln=[]
	ln.append(l1)
	ln.append(l2)
	flag=1
	switch=0
	lane=0
	b1=l1[0]=='.'
	b2=l2[0]=='.'
	if b1 and b2:
		i1=l1.find('#')
		i2=l2.find('#')
		if not(i2==-1 or i1==-1):
			if(l1.find('#')>l2.find('#')):
				lane=0
			else:
				lane=1
		else:
			if(i1==-1):
				lane=0
			else:
				lane=1
	elif b1:
		lane=0
	elif b2:
		lane=1
	else:
		print ("No")
		continue
	for i in range(1,len(l1)):
		if ln[lane][i]=='#':
			if lane==1:
				lane=0
			else:
				lane=1
			if ln[lane][i]=='#':
				flag=0
				break
			else:
				switch+=1
	if flag==1:
		print("Yes")
		print(switch)
	else:
		print("No")