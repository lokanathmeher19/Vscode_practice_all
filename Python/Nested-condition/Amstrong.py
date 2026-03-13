number=int(input("Enter a three-digit number: "))

number_string=str(number)

first_digit=int(number_string[0])
second_digit=int(number_string[1])
third_digit=int(number_string[2])

sumofcubes=first_digit**3+second_digit**3+third_digit**3
is_armstrong_number= sumofcubes==number

print(is_armstrong_number)
