n = int(input())
s = [4,7,47,74,44,77,447,474,744,444,777,774,747,477]
found = False 
for i in s:
  if n % i == 0:
    print("YES")
    found = True
    break
if not found:
  print("NO")


'''n=int(input())
count=0
l=list(str(n))
for i in l:
    if i=="7" or i=="4":
        count+=1
if count==len(l):
    print("YES")
else:
    if n%4==0 or n%7==0 or n%47==0 or n%74==0 or n%477==0 or n%747==0 or n%774==0 or n%744==0 or n%474==0 or n%447==0:
        print("YES")
    else:
        print("NO")'''