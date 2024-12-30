def check_first_last(numbers):
    """Checks if the first and last elements of the list are the same."""
    if len(numbers) < 1:
        return False  # Return False for an empty list
    return numbers[0] == numbers[-1]

# Get input from the user
numbers = input("Enter a list of numbers: ").strip().split()

# Convert the input strings to integers
numbers = [int(num) for num in numbers]

# Check the condition and display the result
if check_first_last(numbers):
    print("The first and last numbers are the same.")
else:
    print("The first and last numbers are not the same.")

