k=int(input())
l=list(map(int,input().split()))
l.sort(reverse=True)
sm=0
count=0
for i in range(len(l)):
  if sm<k:
    sm+=l[i]
    count+=1
print(count if sm>=k else -1)