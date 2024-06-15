t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    s = []
    for _ in range(n):
        s.append(input())
    
    p = []
    for i in range(m):
        str = ""
        for j in range(n):
            str += s[j][i]
        p.append(str)
    
    match = "vika"
    j = 0
    i = 0
    while i < m:
        if match[j] in p[i]:
            j += 1
        if j == 4:
            break
        i += 1
    
    if j == 4:
        print("YES")
    else:
        print("NO")