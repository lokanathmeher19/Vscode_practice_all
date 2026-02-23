a=int(input("Enter a three digit number: "))

h=a//100
t=(a//10)%10
u=a%10

c1=(h>7) and (t>7) and (u>7)
c2=(h*t<30) and (h*u<30) and (t*u<30)

print(c1 or c2)