a=input("Enter a string: ")
b=input("Enter a string to be replaced with stars: ")

result='*'* len(b) + a[len(b):]

print(result)