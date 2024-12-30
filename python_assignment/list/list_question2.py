def create_list(list1, list2):
    """Creates a new list with odd numbers from list1 and even numbers from list2."""
    odd_numbers = [num for num in list1 if num % 2 != 0]
    even_numbers = [num for num in list2 if num % 2 == 0]
    return odd_numbers + even_numbers

# Get input for the two lists
list1 = list(map(int, input("Enter numbers for the first list: ").split()))
list2 = list(map(int, input("Enter numbers for the second list: ").split()))

# Create the new list
new_list = create_list(list1, list2)
print("New list:", new_list)

