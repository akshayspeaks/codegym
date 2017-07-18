from math import sqrt
memo=set()
def getAns(n):
	a=n
	while(n%2==0):
		n/=2
	while(n%3==0):
		n/=3
	for i in range(5,int(sqrt(n)+1),2):
		if(n%i==0):
			if(i%4==1 and a%i==0):
				memo.add(a)
				return True
			while(n%i==0):
				n/=i
	if(n>3 and n%4==1 and a%n==0):
		memo.add(a)
		return True
	return False


	#return all(n%i for i in islice(count(2), int(sqrt(n)-1)))


t=int(input())
for it in range(t):
	n=int(input())
	if n in memo:
		print("YES")
		continue
	if getAns(n):
		print("YES")
	else:
		print("NO")
#print(memo)
