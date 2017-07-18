import sys
n=int(sys.stdin.readline())
ln=1
if (n%2==0):
	ln=2
	#mul.add(2)
	while (n%2==0):
		n/=2
for i in range(3,int((n**0.5))+1,2):
	if(n%i==0):
		ln*=i
		while(n%i==0):
			n/=i
if(n>2):
	ln*=n
print(int(ln))
