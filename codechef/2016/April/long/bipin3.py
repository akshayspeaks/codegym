import sys

def long_pow(x, y, z):
    number = 1
    while y:
        if y & 1:
            number = number * x % z
        y >>= 1
        x = x * x % z
    return number
test_cases=int(input())
for test in range(test_cases):
    n,m=map(int,input().split())
    ans=(m*long_pow((m-1),(n-1),1000000007))%1000000007
    print(ans)
