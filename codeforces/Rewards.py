a1,a2,a3=map(int,input().split())
b1,b2,b3=map(int,input().split())
n=int(input())
a=a1+a2+a3
b=b1+b2+b3
x=a//5
if a%5!=0:
  x+=1
y=b//10
if b%10!=0:
  y+=1
if x+y<=n:
  print("YES")
else:
  print("NO")