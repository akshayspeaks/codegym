from math import sqrt
from itertools import count, islice

def isPrime(n):
	if n < 2: return False
	return all(n%i for i in islice(count(2), int(sqrt(n)-1)))

f = open('out.txt', 'w')
for i in range(5,1000000,2):
	if i%4==1 and isPrime(i) :
		f.write(str(i)+',')

f.close()
