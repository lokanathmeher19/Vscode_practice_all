d=input().strip()
n=int(input().strip())

days=["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"]

start_index=days.index(d)
result_index=(start_index+n-1)%7

print(days[result_index])