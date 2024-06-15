s1=str(input())
s2=str(input())
s1=s1.lower()
s2=s2.lower()
if s1==s2:
    print(0)
for i in range(len(s1)):
    if ord(s1[i])<ord(s2[i]):
        print(-1)
        break
    elif ord(s1[i])>ord(s2[i]):
        print(1)
        break
    else:
        continue