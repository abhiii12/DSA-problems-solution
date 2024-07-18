S=str(input())
u= 0
l= 0
for char in S:
  if char.isupper():
    u += 1
  elif char.islower():
    l += 1
if u > l:
  print(S.upper())
else:
  print(S.lower())
