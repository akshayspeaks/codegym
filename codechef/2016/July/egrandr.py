import sys

tests=int(sys.stdin.readline())

for test in range(tests):
	arr = int(sys.stdin.readline())
	grades = list(map(int,sys.stdin.readline().split()))
	low=high=0
	for gr in grades:
		if gr<3:
			high=-1
			low=0
			break
		elif gr==3:
			low+=1
		elif gr==5:
			high+=1
	if low<=high and high!=0:
		print("Yes")
	else:
		print("No")