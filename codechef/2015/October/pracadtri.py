from math import sqrt
from itertools import count, islice

memo=[False]*5000005
lim=5000003
def isPrime(n):
    return all(n%i for i in islice(count(2), int(sqrt(n)-1)))
def mapPr4():
    for it in range(5,lim,4):
        if isPrime(it):
            j=it
            while(j<lim):
                memo[j]=True
                j+=it
mapPr4()
for it in range(26):
    print(it,memo[it])
