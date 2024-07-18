n=int(input())
l=list(map(int,input().split()))
sm=0
i=0
while sm<n:
  sm+=l[i]
  i=(i+1)%len(l)
if i==0:
  print(7)
else:
  print(i)