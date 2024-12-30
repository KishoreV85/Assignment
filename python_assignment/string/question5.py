def replace_substring(string, old_substring, new_substring):
    """Replaces occurrences of old_substring with new_substring in the given string."""
    return string.replace(old_substring, new_substring)

# Get input from the user
original_string = input("Enter the original string: ").strip()
old_substring = input("Enter the substring to replace: ").strip()
new_substring = input("Enter the new substring: ").strip()
    
# Replace substring and display the result
updated_string = replace_substring(original_string, old_substring, new_substring)
print("Original string:", original_string)
print("Updated string:", updated_string)

