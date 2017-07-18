# your code goes here
t=int(input())
for it in range(t):
	n=int(input())
	s1=1
	s2=2
	count=2
	while(n>=(s1+s2)):
		count+=1
		t=s2
		s2=s1+s2
		s1=t
	if n==1:
		print(n)
	else:
		print (count)