n=5
mat=[]
for _ in range(n):
    row=list(map(int,input().split()))
    mat.append(row)
for i in range(n):
  for j in range(n):
    if mat[i][j]==1:
      print(abs(i-2)+abs(j-2))
      break
