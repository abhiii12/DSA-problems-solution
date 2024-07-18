n=int(input())
speed=[]
ram=[]
hdd=[]
cost=[]
for _ in range(n):
  s,r,h,c=map(int,input().split())
  speed.append(s)
  ram.append(r)
  hdd.append(h)
  cost.append(c)
for i in range(n):
  for j in range(n):
    if speed[i]<speed[j] and ram[i]<ram[j] and hdd[i]<hdd[j]:
      cost[i]=1001
a=cost.index(min(cost))
print(a+1)