n=int(input())
twos=0
threes=0
if n%2==0:
	twos=int(n/2)
else:
	twos=int(n/2)-1
	threes=1
print(twos+threes)
for x in range(twos):
	print(2,end=" ")
for x in range(threes):
	print(3,end=" ")
print()