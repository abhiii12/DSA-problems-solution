n=int(input())
l=list(map(int,input().split()))
mx=max(l)
mn=min(l)
if mx==mn:
  print(mx-mn,(n*(n-1))//2)
else:
  x=l.count(mx)
  y=l.count(mn)
  print(mx-mn,x*y)