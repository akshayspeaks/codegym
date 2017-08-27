import sys
tests = int(input())
for test in range(tests):
    n = int(sys.stdin.readline())
    arr = list(map(int,sys.stdin.readline().split()))
    valid = True
    i=0
    while valid:
        if i>=n-1-i:
            break
        if arr[i]==arr[n-1-i] and arr[i+1]-arr[i] in [0,1,-1]:
            pass
        else:
            valid = False
        i+=1
    valid = valid and arr[i]==7
    if valid:
        print("yes")
    else:
        print("no")
