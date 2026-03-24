def count_vowels(s):
    vowels = "aeiouAEIOU"
    v = 0
    c = 0
    
    for ch in s:
        if ch.isalpha():
            if ch in vowels:
                v = v + 1
            else:
                c = c + 1
                
    print("Vowels:", v)
    print("Consonants:", c)

count_vowels("Hello World")