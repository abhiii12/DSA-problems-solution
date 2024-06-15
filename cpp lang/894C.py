t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    if max(arr) > n:
        print("NO")
        continue

    ps = [0] * (n + 1)
    for i in range(n):
        ps[0] += 1
        ps[arr[i]] -= 1

    sm = 0
    for i in range(n):
        sm += ps[i]
        ps[i] = sm

    ok = all(ps[i] == arr[i] for i in range(n))
    print("YES" if ok else "NO")
