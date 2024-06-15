n=int(input())
s_list=list(map(int,input().split()))
total=sum(s_list)
s_list.sort(reverse=True)
sm=0
count=0
for i in s_list:
    sm+=i
    count+=1
    if sm>total-sm:
        print(count)
        break



