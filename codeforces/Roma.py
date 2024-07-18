n,k=map(int,input().split())
l=list(map(int,input().split()))
res=0
for i in l:
  count=0
  for j in str(i):
    if j == "4" or j == "7":
      count+=1
  if count<=k:
    res+=1
print(res)
      