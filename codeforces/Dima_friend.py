n=int(input())
l=list(map(int,input().split()))
sm=sum(l)
x=0
for i in range(1,6):
    if (sm+i)%(n+1)!=1:
      x+=1
print(x)