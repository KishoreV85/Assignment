def reverse_string(string):
    """Reverses the given string."""
    return string[::-1]

# Get input from the user
string = input("Enter a string: ")

# Reverse the string and display the result
reversed_string = reverse_string(string)
print("Reversed string:", reversed_string)

