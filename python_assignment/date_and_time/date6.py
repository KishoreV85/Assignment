# Program to find number of days between two given dates
from datetime import datetime

# get the date from the user
date1 = datetime.strptime(input("Enter the date YYYY-MM-DD"), "%Y-%m-%d")
date2 =datetime.strptime(input("Enter the date YYYY-MM-DD"), "%Y-%m-%d") 

# find the number of days
difference = abs((date1 - date2).days)

# print the result
print("Number of days between the two dates:", difference)

