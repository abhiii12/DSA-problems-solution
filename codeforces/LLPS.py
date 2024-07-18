s=list(str(input()))
x=[]
for i in s:
  x.append(ord(i))
mx=max(x)
count=x.count(mx)
print(chr(mx)*count)