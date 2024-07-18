n=str(input())
c1=n.count("1")
c2=n.count("14")
c3=n.count("144")
if c1+c2+c3==len(n):
  print("YES")
else:
  print("NO")
