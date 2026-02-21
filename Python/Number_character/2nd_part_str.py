word=input("Enter a string: ")
num=''
for ch in word:
    if ch.isdigit():
        num += ch
print(int(num))