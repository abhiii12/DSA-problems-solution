m=list(map(int,input().split()))
w=list(map(int,input().split()))
hs,hu=map(int,input().split())
problems=[500,1000,1500,2000,2500]
sm=0
for i in range(5):
  sm+=max(0.3*problems[i],((1-(m[i]/250))*problems[i]-50*w[i]))
print(int(sm+hs*100-hu*50))