t=int(input("Enter the time in 24-hour format: "))

m=((t>=4) and (t<12))
a=((t>=12) and (t<16))
e=((t>=16) and (t<20))

if m:
    print("Good Morning")
elif a:
    print("Good Afternoon")
elif e:
    print("Good Evening")
else:
    print("Good Night")