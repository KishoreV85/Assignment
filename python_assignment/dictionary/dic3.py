# sample dictionary
sample_dictionary = {'a': 1, 'b': 2, 'c': 3}
value_to_check = int(input("Enter the value to check:"))
# Check if the value exists
if value_to_check in sample_dictionary.values():
    print(f"Value {value_to_check} exists in the dictionary.")
else:
    print(f"Value {value_to_check} does not exist in the dictionary.")

