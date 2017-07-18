import sys
n=int(sys.stdin.readline())
for i in range(n):
    t=sorted(list(map(int,sys.stdin.readline().split())))
    for el in t:
        print(el,end=' ')
    print()
