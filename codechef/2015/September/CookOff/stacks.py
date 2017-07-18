import sys
t=int(input())
for it in range(t):
	n =int(input())
	arr =list(map(int,(sys.stdin.readline().split(' '))))
	soln=[]
	soln.append(arr[0])
	del(arr[0])
	for number in arr:
		if number<soln[-1]:
			ind=0
			while (number>=soln[ind]):
				ind+=1
			soln[ind]=number
		else:
			soln.append(number)
	print(len(soln),end=" ")
	for num in soln:
		print(num,end=" ")
	print()