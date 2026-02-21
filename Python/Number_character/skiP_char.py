a=input("Enter a string: ")
f=a[:2]
last=a[-2:]

middle_stars='*'*(len(a)-4)

print(f+middle_stars+last)