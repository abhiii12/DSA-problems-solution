n=int(input())
l=list(map(int,input().split()))
s,t=map(int,input().split())
if s>t:
  s,t=t,s
sm1=sum(l[s-1:t-1])
sm2=sum(l[:s-1]) + sum(l[t-1:])
print(min(sm1,sm2))
