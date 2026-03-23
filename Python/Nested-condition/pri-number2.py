a=int(input("enter number"))
b=int(input("enter the number"))

if(a%3==0 and b%3==0) and (a % 12 == 0 or b %12==0):
    print("Pair")
else:
    print("Not a Pair")