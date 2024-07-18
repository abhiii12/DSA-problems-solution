n,m=map(int,input().split())
chess=[]
for i in range(n):
    chess.append(list(input()))
for i in range(n):
    ans=""
    for j in range(m):
       if chess[i][j]==".":
         if (i+j)%2==0:
             ans+="W"
         else:
             ans+="B"
       else:
           ans+="-"
    print(ans)