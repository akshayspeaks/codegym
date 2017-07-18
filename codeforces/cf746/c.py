s,a,b=map(int,input().split())
t1,t2=map(int,input().split())
p,d=map(int,input().split())
T1=abs(a-b)*t2
T2=0
if d==-1:
	if p>a:
		T2+=abs(p-a)*t1
	else:
		T2+=(2*s+p-a)*t1
	T2+=abs(a-b)*t1
else:
	if a>p:
		T2+=abs(a-p)*t1
	else:
		T2+=abs(2*s-p+a)*t1
	T2+=abs(a-b)*t1
print(min(T1,T2))