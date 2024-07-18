n=int(input())
x=list(map(int,input().split()))
count_0 = x.count(0)
count_5 = x.count(5)
if count_0 == 0:
    print(-1)  
else:
    max_5s = (count_5 // 9) * 9
    if max_5s == 0:
        print(0)
    else:
        result = '5' * max_5s + '0' * count_0
        print(result)