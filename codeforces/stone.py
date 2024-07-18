n=int(input())
l=list(input())
count=0
for i in range(n-1):
  if l[i]==l[i+1]:
    count+=1
print(count)