w=input("Enter a string: ")
index=int(input("Enter the index of the character to skip: "))

result=w[:index] + w[index+1:]

print(result)