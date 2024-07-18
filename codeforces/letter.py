s1=str(input())
s2=str(input())
has={}
for i in s1:
  if i in has:
    has[i]+=1
  else:
    has[i]=1
for i in s2:
  if i !=" ":
    if i not in has or has[i]==0:
      print("NO")
      break
    else:
      has[i]-=1
else:
  print("YES")