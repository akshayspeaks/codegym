import sys
t=int(sys.stdin.readline())
for test in range (t):
    names=list(sys.stdin.readline().split())
    names[-1]=names[-1][:1].upper()+names[-1][1:].lower()
    for name in names[:-1]:
        print(name[0].upper()+'.',end=' ')
    print(names[-1])
