import sys
import itertools

def calculateWiringCost(start,end,cords):
	print ("summation of coordinates to be done",cord)
	return start+sum(cords)


#tests = int(input())
tests=1
for test in range(tests):
	#sz=int(sys.stdin.readline())
	sz=3
	#vil=list(map(int,sys.stdin.readline().split()))
	vil=[1,0,0]
	#cord=list(map(int,sys.stdin.readline().split()))
	cord=[1,5,6]
	elec_cost=0
	ind=0
	while(0 in vil[ind:]):
		start = vil.index(0)
		try:
			ind = vil[start:].index(1)+start
		except:
			ind=len(vil)
		s=(start,ind)
		if start==0:
			startCost=0
		else:
			startCost=cord[start]-cord[start-1]
		if ind==sz:
			endCost=0
		else:
			endCost=cord[ind+1]-cord[ind]
		print("start cost",startCost)
		print("end cost",endCost)
		print (calculateWiringCost(startCost,endCost,cord[start:ind]))
		vil[start:ind]=list(itertools.repeat(1,ind-start))
		print (vil)
		ind+=1