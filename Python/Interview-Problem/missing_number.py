def missing_number(arr, n):
    total = n * (n + 1) // 2
    return total - sum(arr)

arr = [1, 2, 4, 5]
n = 5
print("Missing number:", missing_number(arr, n))