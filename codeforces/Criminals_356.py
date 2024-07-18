
n,b=map(int,input().split())
d=list(map(int,input().split()))
e=0
f,g=b-2,b 
if d[b-1]==1: e+=1
while f>=0 and g<n:
    if d[f]==1 and d[g]==1:
        e+=2
    f-=1
    g+=1
while f>=0:
    if d[f]==1:
        e+=1
    f-=1
while g<n:
    if d[g]==1:
        e+=1
    g+=1
print(e)