G=str(input())
H=str(input())
mix=str(input())
total=G+H
t=sorted(total)
s=sorted(mix)
if t==s:
    print("YES")
else:
    print("NO")