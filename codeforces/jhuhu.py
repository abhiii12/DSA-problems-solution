n,m=map(int,input().split())
l=list(map(int,input().split()))
 
ind = [[num,l[num-1]] for num in range(1,n+1)]
 
while len(ind) > 1:
    if (ind[0][1] - m) <= 0:
        ind.pop(0)
    else:
        ind[0][1] -= m
        a = ind.pop(0)
        ind.append(a)
print(ind[0][0])