n=int(input())
time=[]
for _ in range(n):
  x,y=map(int,input().split())
  time.append((x,y))
has={}
for i in time:
  if i in has:
    has[i]+=1
  else:
    has[i]=1
print(max(has.values()))