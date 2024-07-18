n=int(input())
l=list(map(int,input().split()))
x=l.count(100)
y=l.count(200)
if x==0:
  if y%2==0:
    print("YES")
  else:
    print("NO")
elif (y%2!=0 and x%2==0) or (y%2==0 and x%2==0):
  print("YES")
else:
  print("NO")