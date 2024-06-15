n=int(input())
l=list(map(int,input().split()))
sm=0
for i in l:
    sm+=i/100
print((sm*100)/n)