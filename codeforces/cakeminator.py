r,c=map(int,input().split())
x,y=set([]),set([])
for i in range(r):
    l=input()
    for j in range(len(l)):
        if l[j]=="S":
            x.add(i)
            y.add(j)
print((r*c)-(len(x)*len(y)))