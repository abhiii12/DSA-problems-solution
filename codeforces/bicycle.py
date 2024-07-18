n=int(input())
l1=list(map(int,input().split()))
m=int(input())
l2=list(map(int,input().split()))
arr=[]
for i in range(n):
  for j in range(m):
    if l2[j]%l1[i]==0:
      arr.append(l2[j]//l1[i])
mx=max(arr)
print(arr.count(mx))
