n=int(input())
l=[]
for i in range(1,n+1):
  l.append(i)
if n%2!=0:
  print(-1)
else:
  j = 0
  while j<len(l)-1:
    l[j],l[j+1]=l[j+1],l[j]
    j+=2
  print(" ".join(map(str,l)))