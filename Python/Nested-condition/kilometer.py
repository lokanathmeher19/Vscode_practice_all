d = int(input(" Enter the distance traveled in kilometers: "))

score = 0

# first 40 distance
if d > 0:
    score += min(d, 40) * 2

# next 20 distance
if d > 40:
    score += min(d - 40, 20) * 4

# next 60 distance
if d > 60:
    score += min(d - 60, 60) * 6

# distance above 120
if d > 120:
    score += (d - 120) * 8

# bonus score
score += 50

print(score)