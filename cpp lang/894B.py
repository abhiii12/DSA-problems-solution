def solve():
    n = int(input())
    
    v = list(map(int, input().split()))
    ans = []
    count = 1
    
    ans.append(v[0])
    for i in range(1, n):
        if v[i] >= v[i-1]:
            ans.append(v[i])
            count += 1
        else:
            ans.append(v[i])
            ans.append(v[i])
            count += 2
    
    print(count)
    print(*ans)

t = int(input())
for _ in range(t):
   solve()
