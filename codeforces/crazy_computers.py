n,c=map(int,input().split())
l=list(map(int,input().split()))
count=0
for i in range(n-1):
  if l[i+1]-l[i]<=c:
    count+=1
  else:
    count=0
print(count+1)