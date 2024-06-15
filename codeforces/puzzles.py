n,m=map(int,input().split())
pieces=list(map(int,input().split()))
pieces=sorted(pieces)
ans=float("inf")
for i in range(m-n+1):
  A=max(pieces[i:i+n])
  B=min(pieces[i:i+n])
  ans=min(ans,A-B)
print(ans)
