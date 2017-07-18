c,u,v,a,l=map(int,input().split())
ans=1
c-=u
while c>0:
    ans+=1
    u=min(v,u+a)
    c-=u-l
print(ans)
