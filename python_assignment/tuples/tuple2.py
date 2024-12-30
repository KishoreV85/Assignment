# Get tuple from user
user_input = input("Enter elements of the tuple separated by spaces: ")
user_tuple = tuple(map(int, user_input.split()))

# Get the index to access
value_to_access = int(input("Enter the value you want to check in the tuple: "))

# Check if the value exists and return its index
if value_to_access in user_tuple:
    index = user_tuple.index(value_to_access)
    print(f"The value {value_to_access} is at index {index} in the tuple.")
else:
    print(f"The value {value_to_access} does not exist in the tuple.")

