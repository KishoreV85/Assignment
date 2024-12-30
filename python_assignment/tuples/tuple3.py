# Given tuple
tuple1 = (('a', 44), ('b', 25), ('c', 9), ('d', 52))

# Sort by the second item in each tuple
sorted_tuple = tuple(sorted(tuple1, key=lambda x: x[1]))
print("Sorted tuple:", sorted_tuple)

