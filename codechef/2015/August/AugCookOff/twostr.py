t=int(input())
for it in range(t):
	sa=input()
	sb=input()
	match=True
	i=-1
	while (match) and (i<len(sa)-1):
		i+=1
		if (sa[i]=='?' or sb[i]=='?') or(sa[i]==sb[i]):
			continue
		else:
			match=False
	if(match):
		print("Yes")
	else:
		print("No")