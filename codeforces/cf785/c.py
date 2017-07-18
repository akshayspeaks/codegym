n,m=map(int,input().split())
gr=n
day=m
while(gr>0):
    gr=min(n,gr+m)
    day+=1
    gr-=day
print(day)
