k=int(input())
l=int(input())
m=int(input())
n=int(input())
d=int(input())
arr=[]
for i in range(1,d+1):
  arr.append(i)
count=0
for i in range(len(arr)):
  if arr[i]%k==0 or arr[i]%l==0 or arr[i]%m==0 or arr[i]%n==0:
    count+=1
    
print(count)