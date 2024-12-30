# Finding the day of the week of a given date
from datetime import datetime

# Getting the date from the user
date_input = input("Enter a date (YYYY-MM-DD)")

# Convert the string into date and time format
given_date = datetime.strptime(date_input, "%Y-%m-%d")

# To find the day of the input date using in-built function
day_of_week = given_date.strftime("%A")

# Print the day
print("Day of the week:", day_of_week)

