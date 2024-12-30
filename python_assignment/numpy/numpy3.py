# Program to delete column and add column with different element
import numpy as np

# Given array
array = np.array([[34, 43, 73],
                    [82, 22, 12],
                    [53, 94, 66]])

new_col = np.array([10 , 10, 10])

# Delete the second column (index 1)
array = np.delete(array, 1, axis=1)

# Insert the new column at index 1
result = np.insert(array, 1, new_col, axis=1)
print("Modified Array:\n", result)

