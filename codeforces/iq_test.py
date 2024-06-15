n=int(input())
a=list(map(int,input().split()))
b=0
for i in range(1,n-1):
    if a[i-1]%2!=a[i]%2 and a[i]%2!=a[i+1]%2:
        print(i+1)
        b=i+1
if b==0:
    if a[0]%2!=a[1]%2:
        print(1)
    else:
        print(n)