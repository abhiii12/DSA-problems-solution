s1=str(input())
s2=str(input())
s3=str(input())
vowels=['a','e','i','o','u']
c1=0
for i in s1:
  if i in vowels:
    c1+=1
c2=0  
for i in s2:
  if i in vowels:
    c2+=1
c3=0
for i in s3:
  if i in vowels:
    c3+=1
if c1==5 and c2==7 and c3==5:
  print("YES")
else:
  print("NO")