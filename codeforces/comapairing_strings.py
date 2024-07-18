s1=str(input())
s2=str(input())
if len(s1)!=len(s2) or sorted(s1)!=sorted(s2):
  print("NO")
else:
  count=0
  for i in range(len(s1)):
    if s1[i]!=s2[i]:
      count+=1
  if count==2:
    print("YES")
  else:
    print("NO")
    