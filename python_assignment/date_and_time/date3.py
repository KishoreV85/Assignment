# Subtarct a week from the given date
from datetime import datetime, timedelta

# Get input from the user
date_input = input("Enter a date (YYYY-MM-DD)")

# Convert the input string into a datetime object

given_date = datetime.strptime(date_input, "%Y-%m-%d")

# Subtract a week (7 days) from the given date
new_date = given_date - timedelta(days=7)
print("Date after subtracting a week:", new_date.strftime("%Y-%m-%d"))

