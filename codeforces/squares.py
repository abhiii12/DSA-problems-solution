l1 = list(map(int,input().split()))
l2 = []
 
if abs(l1[3]-l1[1])==abs(l1[2]-l1[0]):
    l2 = [l1[0],l1[3],l1[2],l1[1]]    
 
elif l1[3]==l1[1]:
    side = l1[2] - l1[0]
    l2 = [l1[0],l1[1]+side,l1[2],l1[3]+side]
 
elif l1[2] == l1[0]:
    side = l1[3] - l1[1]
    l2 = [l1[0]+side,l1[1],l1[2]+side,l1[3]]
 
else:
    l2 = [-1]
 
print(*l2)