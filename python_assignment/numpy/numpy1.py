# Program to create an array from 100 to 200 with step of 10

import numpy

# Generate the array
array = numpy.arange(100, 200, 10)

# To create a 5x2 integer array
array = array.reshape(5, 2)
print("5×2 Integer Array:\n", array)

