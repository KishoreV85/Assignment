def split_on_spaces(string):
    """Splits a string into words using spaces as the delimiter."""
    return string.split()

# Get input from the user
string = input("Enter a string: ")

# Split the string and display the result
words = split_on_spaces(string)
print("Words in the string:", words)

