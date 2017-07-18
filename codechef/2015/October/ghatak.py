from math import sqrt
from itertools import count, islice

def isPrime(n):
	if n < 2: return False
	return all(n%i for i in islice(count(2), int(sqrt(n)-1)))

mod4pr=[]

for i in range(5,1000000,2):
	if i%4==1 and isPrime(i) :
		mod4pr.append(i)

t=int(input())
for it in range(t):
	n=int(input())
	ans=False
	j=0
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