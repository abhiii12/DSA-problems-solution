n = int(input())
for i in range(n + 1):
    for j in range(n - i):
        print(" ", end=" ")
    for j in range(i + 1):
        if j == i:
            print(j, end="")  # No space after the last digit
        else:
            print(j, end=" ")
    for j in range(i - 1, -1, -1):
        print(" " + str(j), end="")
    print()
for i in range(n - 1, -1, -1):
    for j in range(n - i):
        print(" ", end=" ")
    for j in range(i + 1):
        if j == i:
            print(j, end="")  # No space after the last digit
        else:
            print(j, end=" ")
    for j in range(i - 1, -1, -1):
        print(" " + str(j), end="")
    print()