n,m,a,b=map(int,input().split())
per_m=b/m
if per_m>=a:
  print(n*a)
else:
  print(b*(n//m)+min((n%m)*a,b))