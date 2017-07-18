from math import sqrt

def getPFacs(n):
	while(n%2==0):
		n/=2
	while(n%3==0):
		n/=3
	pfac=[]
	for i in xrange(5,sqrt(n),2):
		if(n%i==0):
			if(i%4==1):
				pfac.append(int(i))
			while(n%i==0):
				n/=i
	if(n>3 and n%4==1):
		pfac.append(int(n))
	return pfac


	#return all(n%i for i in islice(count(2), int(sqrt(n)-1)))


t=int(input())
for it in range(t):
	n=int(input())
	ans=False
	j=0
	mod4pr=getPFacs(n)
	print(mod4pr)
	if not(len(mod4pr)==0):
		val=mod4pr[0]
		while(n>=val):
			if(n%val==0):
				ans=True
				break
			j+=1
			val=mod4pr[j]
		if ans:
			print("YES")
		else:
			print("NO")
	else:
		print("NO")
	mod4pr.clear()