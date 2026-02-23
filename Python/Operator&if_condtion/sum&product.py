a=int(input("Enter a number: "))
b=int(input("Enter another number: "))

total=a+b
product=a*b

if abs(total)<100 and abs(product)<100:
    print(True)
else:
    print(False)