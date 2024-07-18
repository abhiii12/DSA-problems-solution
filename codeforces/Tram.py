n=int(input())
cp=0
mp=0
for i in range(n):
    a,b=map(int,input().split())
    cp-=a
    cp+=b
    mp=max(mp,cp)
print(mp)