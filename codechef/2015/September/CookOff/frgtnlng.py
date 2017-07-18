import sys
t=int(input())
for it in range(t):
	n,h=map(int,input().split())
	dicti={}
	arr =(sys.stdin.readline().rstrip('\n').split(' '))
	for word in arr:
		dicti[word]="NO"
	for phr in range(h):
		phrase=sys.stdin.readline().rstrip('\n').split(' ')
		#print (phrase)
		for word in phrase:
			if word in dicti:
				dicti[word]="YES"
	for word in arr:
		print(dicti[word],end=" ")
	print()