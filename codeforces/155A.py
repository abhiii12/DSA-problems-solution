n=int(input())
l=list(map(int,input().split()))
mx=l[0]
mn=l[0]

count=0
for i in range(1,n):
    if l[i]>mx:
        mx=l[i]
        count+=1
    elif l[i]<mn:
        mn=l[i]
        count+=1
print(count)