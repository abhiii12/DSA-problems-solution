n=int(input())
l=[]
for i in range(n):
    s=str(input())
    l.append(s)
l=sorted(l)
x=l.count(l[0])
if x>n//2:
    print(l[0])
else:
    print(l[-1])
