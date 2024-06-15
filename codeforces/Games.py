n=int(input())
l=[]
for k in range(n):
    a,b=map(int,input().split())
    l.append((a,b))
x=0
for i in range(n):
    for j in range(n):
        if i!=j:
            b=l[i][0]
            a=l[j][1]
            if a==b:
                x+= 1
print(x)