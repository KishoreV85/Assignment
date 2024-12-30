# Recursive fucntion to calculate the sum of numbers from 0 to 10
def sum_recursive(n):
    # Base case
    if n == 0:
        return 0
    # Recursive call
    return n + sum_recursive(n - 1)

# Example usage
result = sum_recursive(10)
print("Sum of numbers from 0 to 10:", result)

