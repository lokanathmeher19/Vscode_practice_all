a=input("Enter a string: ")
b=int(input("Enter the index of the character to replace: "))
c=input("Enter the replacement character: ")

result=a[:b]+c+a[b+1:]
print(result)
