u=int(input("Enter the number of units consumed: "))

bill=0

if u<50:
    bill=2*u
elif u<150:
    bill=(2*50)+(3 *(u-50))
elif u<250:
    bill=(2*50)+(3*100)+(5*(u-150))
elif u >=250:
    bill=(2*50)+(3*100)+(5*100)+(8*(u-250))
    
sur=(0.2*bill)
totalbill=(bill+sur)

print(totalbill)