n,m=map(int,input().split())
l=list(map(int,input().split()))
sm=0
l.sort()
count=0
for i in range(n):
  if l[i]<=0 and count<m:
    sm+=abs(l[i])
    count+=1
  else:
    break
print(sm)