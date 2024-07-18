n,m=map(int,input().split())
primes=[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,53]
i=primes.index(n)
if primes[i+1]==m:
    print("YES")
else:
    print("NO")