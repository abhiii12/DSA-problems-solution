n = int(input())
a = list(map(int, input().split()))
minn = float('inf')

for num in a:
    minn = min(minn, abs(num))

print(minn)
