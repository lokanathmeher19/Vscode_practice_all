word =input("Enter number")
num =''
for ch in word:
    if ch.isdigit():
        num += ch
    else:
        break
print(int(num))
