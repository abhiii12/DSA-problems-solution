def main():
    t = int(input())
    for _ in range(t):
        a, b, c = map(int, input().split())
        if a == b:
            print(0)
        elif a > b:
            cvb = 0
            while a > b:
                a -= c
                b += c
                cvb += 1
                if a <= b:
                    break
            print(cvb)
        else:
            cvb = 0
            while b > a:
                b -= c
                a += c
                cvb += 1
                if b <= a:
                    break
            print(cvb)

if __name__ == "__main__":
    main()
