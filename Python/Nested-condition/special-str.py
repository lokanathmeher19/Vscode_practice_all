s=input()

if s[:3]=="NXT":
    num=int(s[3:])
    if num%2==0 or num%7==0:
       print("Special String")
    else:
        print("Not a Special String")
else:
    print("Not a Special String")