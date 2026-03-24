def reverse_words(s):
    words = s.split()
    words = words[::-1]
    return " ".join(words)

print(reverse_words("Hello World"))