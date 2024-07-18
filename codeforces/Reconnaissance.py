n = int(input())
l = list(map(int, input().split()))
mind= abs(l[0] - l[-1])
index1, index2 = n, 1
for i in range(n - 1):
    diff = abs(l[i] - l[i + 1])
    if diff < mind:
        mind = diff
        index1, index2 = i + 1, i + 2
print(index1, index2)