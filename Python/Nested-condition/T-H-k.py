string=input("Enter a number with T, H, or K at the end: ")


string_length=len(string)
last_index=string_length - 1

num=string[:last_index]
num=int(num)

last_character = string[last_index]

if last_character=="T":
    values=num*10
elif last_character=="H":
    values=num*100
elif last_character=="K":
    values=num*1000 
    print(values)