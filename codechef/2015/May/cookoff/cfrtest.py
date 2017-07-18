# cook your dish here
import math
t=int(input())
for i in range(t):
    n=int(input())
    numbers = list(map(int, input().split()))
    num=set(numbers)
    print(len(num))