s=str(input())
h="hello"
count=0
j=0
for i in range(len(s)):
  if j<len(h) and  s[i]==h[j]:
    j+=1
    count+=1
if count==5:
  print("YES")
else:
  print("NO")