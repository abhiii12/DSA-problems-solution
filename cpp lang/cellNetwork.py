from bisect import bisect

n, m = map(int, input().split())
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
r = 0
for i in a:
    pos = bisect(b, i)
    dist = int(2e9)
    if pos < m:
        dist = min(b[pos] - i, dist)
    if pos:
        dist = min(i - b[pos - 1], dist)
    r = max(dist, r)
print(r)