t=int(input())
for t in range (t):
    a={}
    for i in range(4):
        ln=input().split()
        a[ln[0]]=int(ln[1])
    if a['Barcelona']>a['Eibar'] and a['RealMadrid']<a['Malaga']:
        print("Barcelona")
    else:
        print("RealMadrid")
