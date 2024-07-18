a,b = map(int, input().split())
x=[1,2,3,4,5,6]
wina,draw,winb=0,0,0
for i in x:
  if abs(a-i)>abs(b-i):
    winb+=1
  elif abs(a-i)<abs(b-i):
    wina+=1
  else:
    draw+=1
  
print(wina,draw,winb)