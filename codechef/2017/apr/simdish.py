t=int(input())
for test in range(t):
    s=set(input().split())
    sec=list(input().split())
    counter=0
    for dish in sec:
        if dish in s:
            counter+=1
    if counter>=2:
        print('similar')
    else:
        print('dissimilar')
