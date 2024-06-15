t = int(input())
for _ in range(t):
    n = int(input())
    v = []
    
    values = list(map(int, input().split()))
    for i in range(n):
        v.append((values[i], i))
    
    v.sort()
    
    p = n
    ans = [0] * n
    
    for i in range(n):
        ans[v[i][1]] = p
        p -= 1
    print(" ".join(map(str, ans)))
