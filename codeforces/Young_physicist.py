n=int(input())
l=[]
for k in range(n):
    x,y,z=map(int,input().split())
    l.append([x,y,z])
sm_x=0
sm_y=0
sm_z=0
for i in range(n):
    sm_x +=l[i][0]
    sm_y +=l[i][1]
    sm_z +=l[i][2]
if sm_x==0 and sm_y==0 and sm_z==0:
  print("YES")
else:
  print("NO")