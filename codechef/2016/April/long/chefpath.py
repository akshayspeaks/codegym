import sys
test_cases=int(sys.stdin.readline())
for test in range(test_cases):
    n,m=map(int,sys.stdin.readline().split())
    if n%2==0 or m%2==0:
        if(n==1 or m==1) and (n!=2 and m!=2):
            print("No")
        else:
            print("Yes")
    else:
        print("No")
