m=int(input("Enter marks of Maths: "))
p=int(input("Enter marks of Physics: "))
c=int(input("Enter marks of Chemistry: "))

if  (m>=35 and p>=35 and c>=35) and (m+p>=90 or p+c>=90 or m+c>=90):
    print(True)
else:
    print(False)