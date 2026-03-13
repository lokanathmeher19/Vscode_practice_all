o=input("Enter the operator (+, -, *, /, %): ")
f=int(input("Enter the first number: "))
s=int(input("Enter the second number: "))

if o=="+":
    print(f+s)
elif o=="-":
    print(f-s)
elif o=="*":
    print(f*s)
elif o=="/":
    print(f/s)
else:
    print(f%s)