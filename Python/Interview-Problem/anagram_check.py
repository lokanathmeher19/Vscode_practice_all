def is_anagram(s1, s2):
    if sorted(s1) == sorted(s2):
        return True
    else:
        return False

print(is_anagram("listen", "silent"))