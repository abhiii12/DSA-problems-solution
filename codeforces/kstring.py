n = int(input())
h = input()
g = len(h)
if g%n != 0:
    print(-1)
else:
    m = {}
    for i in h:
        if i not in m:
            m[i] = 1
        else:
            m[i] += 1
    t = 0
    a = m[h[0]]
    for j in m:
        if m[j]%n != 0:
            t = -1
            break
        else:
            continue
    if t != -1:
        y = ''
        for item in m:
            y += item*(m[item]//n)
        print(y*n)
    if t == -1:
        print(t)