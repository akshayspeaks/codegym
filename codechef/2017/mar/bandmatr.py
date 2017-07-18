import sys
t=int(sys.stdin.readline())
for it in range(t):
    n=int(sys.stdin.readline())
    nz=0
    for i in range(n):
        nz+=list(map(int,sys.stdin.readline().split())).count(1)
    bw=0
    cov=n
    i=n-1
    while(nz>cov):
        bw+=1
        cov+=2*i
        i-=1
    print(bw)
