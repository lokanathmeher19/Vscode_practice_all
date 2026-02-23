s1=input("Enter a string: ")
s2=input("Enter a string to check if it's the end of the first string: ")
i=int(input("Enter the index to check if the second string is a part of the first string starting from that index: "))

print(s1[i:].startswith(s2))