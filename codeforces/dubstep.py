string = str(input())
new_string = ""
for word in string.split("WUB"):
  if word != "":
    new_string += word+" "
cleaned_string=new_string.strip()
print(cleaned_string)