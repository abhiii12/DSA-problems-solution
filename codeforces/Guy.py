n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
ans=a[1:]+b[1:]
if len(set(ans))==n:
  print("I become the guy.")
else:
  print("Oh, my keyboard!")