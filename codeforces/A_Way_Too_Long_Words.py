t=int(input())
for _ in range(t):
    word=str(input())
    word=word.lower()
    if len(word)<=10:
        print(word)
    else:
        print(word[0]+str(len(word)-2)+word[-1])