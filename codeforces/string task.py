s=str(input())
ans=""
for i in s:
    if i not in "aeiouyAEIOUY":
        ans+=i
ans=ans.lower()
res=".".join(list(ans))
print("."+res)