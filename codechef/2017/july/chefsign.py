import sys
t=int(sys.stdin.readline())
for test in range (t):
    ln=sys.stdin.readline()
    mx=0
    di=1
    streak=0
    for ch in ln:
        if di==1:
            if ch=='<':
                streak+=1
            elif ch=='>':
                di=0
                mx=max(mx,streak)
                streak=1
        else:
            if ch=='>':
                streak+=1
            elif ch=='<':
                di=1
                mx=max(mx,streak)
                streak=1
    mx=max(mx,streak)
    print(mx+1)

