def print_even_index_characters(string):
    """Prints characters of the string present at even index numbers."""
    print("Characters at even index numbers:")
    for index in range(0, len(string), 2):  # Iterate through even indices
        print(f"Index {index}: {string[index]}")

# Get input from the user
string = input("Enter a string: ")

# Call the function
print_even_index_characters(string)

