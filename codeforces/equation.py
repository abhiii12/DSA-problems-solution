import math
n,m=map(int,input().split())
count=0
for a in range(int(math.sqrt(n))+1):
  if a**4+a==2*n*a**2+m-n**2:
    count+=1
print(count)