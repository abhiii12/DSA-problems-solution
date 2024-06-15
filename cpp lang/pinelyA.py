t = int(input())

while t > 0:
    a, b, c = map(int, input().split())
    s = input()

    count = b
    tot = b
    cross = False

    if b == a:
        cross = True

    for i in range(c):
        ct = s[i]
        if ct == '+':
            count += 1
            tot += 1
            if count >= a:
                cross = True
        else:
            count -= 1

    if tot >= a:
        if cross:
            print("YES")
        else:
            print("MAYBE")
    else:
        print("NO")
    
    t -= 1
