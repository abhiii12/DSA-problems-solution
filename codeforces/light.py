b = []
for i in range(3):
    b.append(list(map(int,input().split())))
a = [[1,1,1],[1,1,1],[1,1,1]]
for i in range(3):
    for j in range(3):
        dr = [1,-1,0,0]
        dc = [0,0,1,-1]
        sum_ = b[i][j]
        for k in range(4):
            i_ = dr[k]+i
            j_ = dc[k]+j
            if (i_<0 or i_>=3 or j_<0 or j_>=3):
                continue
            sum_+=b[i_][j_]
        if (sum_%2==1):
            a[i][j] = 0
 
for i in range(3):
    print(''.join(list(map(str,a[i]))))