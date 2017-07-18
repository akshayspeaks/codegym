di={}
di['Tetrahedron']=4
di['Cube']=6
di['Octahedron']=8
di['Dodecahedron']=12
di['Icosahedron']=20
n=int(input())
soln=0
for i in range(n):
    soln+=di[input()]
print(soln)
