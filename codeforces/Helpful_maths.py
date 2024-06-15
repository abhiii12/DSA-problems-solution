s=str(input())
ans=[]
for i in s:
    if i=="1" or i=="2" or i=="3":
        ans.append(int(i))
ans=sorted(ans)
ans = list(map(str, ans))
print("+".join(ans))