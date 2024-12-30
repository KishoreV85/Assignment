def extract_digits_in_reverse(number):
    """Extracts digits of a number in reverse order."""
    return [int(digit) for digit in str(number)[::-1]]

# Get input from the user
number = int(input("Enter an integer: "))

# Extract digits in reverse order
digits = extract_digits_in_reverse(number)
print("Digits in reverse order:", digits)

