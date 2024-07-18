n=int(input())
a=list(map(int,input().split()))
for i in range(n):
  count=1
  for j in range(n):
    if a[j]>a[i]:
      count+=1
  print(count,end=" ")
