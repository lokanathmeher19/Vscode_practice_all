a=input("  Enter your choice (Rock, Paper, Scissors): ")
b=input("  Enter your choice (Rock, Paper, Scissors): ")

if a==b:
    print("Tie")
elif(a=="Rock" and b=="Scissors") or (a=="Scissors" and b=="Paper") or (a=="Paper" and b=="Rock"):
    print("Abhinav Wins")
else:
    print("Anjali Wins")