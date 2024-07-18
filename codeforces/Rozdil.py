n=int(input())
l=list(map(int,input().split()))
mn=min(l)
if l.count(mn)>1:
    print("Still Rozdil")
else:
    print(l.index(mn)+1)