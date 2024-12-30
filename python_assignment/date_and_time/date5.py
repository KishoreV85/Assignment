# This program to add a week and 12 hours to input date

from datetime import datetime, timedelta

# Get date and time input from the user
date_input = input("Enter a date and time (YYYY-MM-DD HH:MM): ")

# Convert the input string into a datetime object
try:
    given_date = datetime.strptime(date_input, "%Y-%m-%d %H:%M")

    # Add a week (7 days) and 12 hours to the given date
    new_date = given_date + timedelta(days=7, hours=12)
    print("Date after adding a week and 12 hours:", new_date.strftime("%Y-%m-%d %H:%M"))
except ValueError:
    print("Invalid date and time format.")

