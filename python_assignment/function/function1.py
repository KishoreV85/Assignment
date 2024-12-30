# Program to add two numbers in inner function
# Add 5 to that inner function using outer function
def outer_function(a, b):
    """outer function which add 5 to inner function"""
    def inner_function():
        """Function to add to number"""
        return a + b

    # Call inner function and add 5 to the result
    return inner_function() + 5

# Example usage
result = outer_function(3, 7)
print("Result of outer function:", result)  # Output: 15

