def substring_count():
    """Counts the occurences of the substring in a string."""
    return string.count(substring)
    
# Get inputs from the user    
string = input("Enter the string: ").strip() 
substring = input("Enter the substring to count: ").strip()

# Prints the substring Count
print(f"The substring occurs {substring_count()} times")
