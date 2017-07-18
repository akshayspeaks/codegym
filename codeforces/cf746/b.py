n=int(input())
s=input()
soln=''
flag=(n%2)
for i in range(n):
	if flag==1:
		soln=soln+s[i]
	else:
		soln=s[i]+soln
	flag=1-flag
print(soln)