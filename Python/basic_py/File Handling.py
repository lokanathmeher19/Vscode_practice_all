with open("file.txt", "r") as f:
    count = 0
    for line in f:
        count += 1

print("Lines:", count)