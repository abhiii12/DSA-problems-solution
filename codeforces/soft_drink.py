n,k,l,c,d,p,nl,np=map(int,input().split())
drink=k*l
t1=drink//nl
t2=c*d
t3=p//np
t=min(t1,t2,t3)
print(t//n)