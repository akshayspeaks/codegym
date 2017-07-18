import sys
test_cases=int(sys.stdin.readline())
for test in range(test_cases):
    st=list(map(int,sys.stdin.readline().split()))
    l=int(sys.stdin.readline())
    st.sort()
    offset=1
    itr=0
    while(l>st[itr]):
        offset+=st[itr]
        itr+=1
    print((l-1)*(3-itr)+offset)
