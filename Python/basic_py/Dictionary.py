d = {'a': 3, 'b': 1, 'c': 2}

sorted_dict = dict(sorted(d.items(), key=lambda x: x[1]))

print(sorted_dict)