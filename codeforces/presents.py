'''n=int(input())
l=list(map(int,input().split()))
has={}
for i,c in enumerate(l):
  has[i+1]=c
res=[]
for key in sorted(has, key=has.get):
  res.append(key)
print(" ".join(map(str,res)))'''

n=int(input())
l=list(map(int,input().split()))
has={}
for i in range(1,n+1):
    has[l[i-1]]=i
for i in range(1,n+1):
    print(has[i], end=" ")