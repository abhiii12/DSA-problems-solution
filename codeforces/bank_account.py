n=int(input())
x=list(str(n))
if n>=0:
  print(n)
else:
  if int(x[-1])>=int(x[-2]):
    x.pop(-1)
    print("".join(x))
  else:
    x.pop(-2)
    print(int("".join(x)))