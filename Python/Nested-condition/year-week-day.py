n=int(input("Enter the number of days: "))

y=n//365
w=(n%365)//7
d=(n%365)%7


print(y)
print(w)
print(d)