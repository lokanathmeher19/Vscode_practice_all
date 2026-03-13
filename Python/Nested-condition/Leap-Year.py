y=int(input("Enter a year: "))

if (y%400==0):
    print(True)
elif(y%4==0 and y%100 !=0):
    print(True)
else:
    print(False)