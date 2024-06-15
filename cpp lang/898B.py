t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    a[0]+=1
    ans=1

    for i in range(n):
        ans*=a[i]
    print(ans)