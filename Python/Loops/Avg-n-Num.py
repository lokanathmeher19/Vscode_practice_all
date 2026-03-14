n=int(input("Enter the number of integers you want to average: "))

count=0
sumofnum=0

while count<n:
    count=count+1
    sumofnum=sumofnum+count
avg=sumofnum/n 
print(avg)