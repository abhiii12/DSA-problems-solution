t = int(input())
for _ in range(t):
    n = int(input())
    s = input().strip()
    ans = [0] * (n + 1)
    cnt, perfect0, perfect1 = 0, 0, 0
    
    i, j = 0, n - 1
    
    while i < j:
        if s[i] != s[j]:
            cnt += 1
        if s[i] == s[j] and s[i] == '0':
            perfect0 += 1
        elif s[i] == s[j] and s[i] == '1':
            perfect1 += 1
        i += 1
        j -= 1
    
    if cnt == 0:
        ans[0] = 1
    
    v = 0
    if n % 2 == 1:
        v = 1
    
    for i in range(1, n + 1):
        if cnt > i:
            continue
        y = i - cnt
        if y > (perfect0 * 2 + perfect1 * 2 + v):
            continue
        if y % 2 == 1:
            if n % 2 == 0:
                continue
            else:
                ans[i] = 1
        else:
            ans[i] = 1
    
    p = ''.join(map(str, ans))
    print(p)
