d=int(input())

score=0
if d>50:
    score += 50*3
    d -= 50
else:
    score +=d*3
    d=0 
    
if d > 50:
    score +=50*5
    d-=50
else:
    score +=d*5 
    d=0

if d > 100:
    score +=100*6
    d-=100
else:
    score +=d*6
    d=0

score += d*10 
score+=100

print(score)