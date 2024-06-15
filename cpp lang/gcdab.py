import math

def find_a_and_b(l, r):

    if l % 2 == 0:
        return l, l + 1
    elif l + 2 <= r:
        return l, l + 2
    return -1
t = int(input())
for _ in range(t):
    l, r = map(int, input().split())
    a, b = find_a_and_b(l, r)
    if a == -1:
        print(-1)
    else:
        print(a, b)


