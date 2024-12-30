from collections import Counter

# Given tuple
tuple1 = (50, 10, 60, 70, 50)

# Count occurrences of each number
count = Counter(tuple1)

# Get repeated numbers
repeated_numbers = {key: value for key, value in count.items() if value > 1}

# Print repeated numbers and their counts
print("Repeated numbers and their counts:")
for number, occurrence in repeated_numbers.items():
    print(f"{number}: {occurrence}")

