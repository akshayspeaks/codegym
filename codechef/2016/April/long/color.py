import sys
test_cases=int(sys.stdin.readline())
for test in range(test_cases):
    l=int(sys.stdin.readline())
    st=(sys.stdin.readline())
    config_count=[0,0,0]
    for ch in st:
        if ch=='R':
            config_count[0]+=1
        elif ch=='G':
            config_count[1]+=1
        elif ch=='B':
            config_count[2]+=1
    print(sum(config_count)-max(config_count))
