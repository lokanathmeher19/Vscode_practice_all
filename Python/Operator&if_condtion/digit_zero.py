n=int(input("Enter a three digit number: "))

h=n//100
t=(n//10)%10
u=n%10

if h==0 or t==0 or u==0:
    print(True)
else:
    print(False)