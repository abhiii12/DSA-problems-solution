lst=[]
N=int(input())
for i in range(N):
    ele=int(input())
    lst.append(ele)
for j in range(len(lst)):
    lst[j]=abs(lst[j])
    lst.sort()
print(lst[0])