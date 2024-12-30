# Recursive function
def factorial(n):
    # Base case
    if n == 0 or n == 1:
        return 1
    # Recursive call
    return n * factorial(n - 1)

# Example usage
print("Factorial of 5:", factorial(5))  

