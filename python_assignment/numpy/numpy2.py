import numpy
array = numpy.array([
    [3, 6, 9],
    [12, 15, 18],
    [21, 24, 27],
    [30, 33, 36],
    [39, 42, 45]
])

# Odd rows and even columns
result = array[::2, 1::2]  # Odd rows are 0-based indices 0, 2, 4 and even columns are indices 1, 3, etc.
print("Odd Rows & Even Columns:\n", result)

