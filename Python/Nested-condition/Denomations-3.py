a=int(input("Enter an amount: "))

n500=a//500
a=a%500

n50=a//50
a=a%50

n10=a//10 
a=a%10

n1=a//1

print(f"500: {n500} 50: {n50} 10: {n10} 1: {n1}")