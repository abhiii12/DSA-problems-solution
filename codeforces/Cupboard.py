n=int(input())
a=[]
b=[]
for _ in range(n):
  l,r=map(int,input().split())
  a.append(l)
  b.append(r)
mn_l=min(a.count(1),a.count(0))
mn_r=min(b.count(1),b.count(0))
print(mn_l+mn_r)