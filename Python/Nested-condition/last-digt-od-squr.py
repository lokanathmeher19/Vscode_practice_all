n=int(input())
s=n**2

n=str(n)
nlen=len(n)

s=str(s)
slen=len(s)

nlast=n[nlen-1]
slast=s[slen-1]

result= (nlast==slast)

if result:
    print("Equal")
else:
    print("Not Equal")

