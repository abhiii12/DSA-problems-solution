s=str(input())
for i in s:
    if i=="H" or i=="Q" or i=="9":
        print("YES")
        break
else:
    print("NO")