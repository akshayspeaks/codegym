t=int(input())
dum=set(map(int,input().split()))
if len(dum)<3:
	print("YES")
elif len(dum)==3:
	num=sorted(list(dum))
	if(num[2]-num[1]==num[1]-num[0]):
		print("YES")
	else:
		print("NO")
else:
	print("NO")