import sys
MOD = 1000000007
t=int(sys.stdin.readline())
for test in range(t):
    p,q,r=map(int,sys.stdin.readline().split())
    A=sorted(list(map(int,sys.stdin.readline().split())))
    B=sorted(list(map(int,sys.stdin.readline().split())))
    C=sorted(list(map(int,sys.stdin.readline().split())))
    sa,sc,ia,ic=0,0,0,0
    s=0
    for i in range(q):
        while (ia<p and A[ia]<=B[i]):
            sa=(sa+A[ia])%MOD
            ia+=1
        while (ic<r and C[ic]<=B[i]):
            sc=(sc+C[ic])%MOD
            ic+=1
        s=s + (((sa*ic)%MOD+(sc*ia)%MOD)*B[i])%MOD + (sa*sc)%MOD + ((pow(B[i],2)%MOD)*(ia*ic)%MOD)%MOD

    print(s)
