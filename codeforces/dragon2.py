s, n = map(int, input().split())
dr = []
for i in range(n):
    x, y = map(int, input().split())
    dr.append((x, y))

dr.sort()

for x, y in dr: 
    if s <= x:  
        print("NO")
        break
    s += y  

else:
    print("YES")