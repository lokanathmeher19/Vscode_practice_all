def missing_number(arr, n):
    total = n * (n + 1) // 2
    s = 0
    
    for i in arr:
        s = s + i
        
    return total - s


arr = [1, 2, 4, 5]
n = 5

print("Missing number is:", missing_number(arr, n))