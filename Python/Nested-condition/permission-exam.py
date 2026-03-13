a=input("Enter the attendance percentage: ")
m=input("Is the student medically fit? (Y/N): ")

length=len(a)
a=a[:(length-1)]
a=int(a)


if a>=75:
    print("Allowed to write exam")
elif a<75 and m=="Y":
    print("Allowed to write exam")
else:
    print("Cannot write exam")