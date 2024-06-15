n=int(input())
height=list(map(int,input().split()))
min_indices = [i+1 for i, x in enumerate(height) if x == min(height)]
max_indices = [i+1 for i, x in enumerate(height) if x == max(height)]
mn_h=max(min_indices)
mx_h=min(max_indices)
if mn_h<mx_h:
  print(mx_h-1 + abs(mn_h-len(height))-1)
else:
  print(mx_h-1 + abs(mn_h-len(height)))