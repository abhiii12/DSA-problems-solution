x1,y1,x2,y2=map(int,input().split())
X1,Y1,X2,Y2=map(int,input().split())

c1=min(x1,X1)
c2=max(x2,X2)
l=abs(c2-c1)

d1=min(y1,Y1)
d2=max(y2,Y2)
w=abs(d1-d2)

num=max(l,w)
print(num*num)