n=int(input("Enter a four-digit number: "))

a=n//1000
b=(n//100)%10
c=(n//10)%10
d=n%10

if a**4+b**4+c**4+d**4==n:
    print("Armstrong Number")
else:
        print("Not an Armstrong Number")