# Converting a string into a datetime object
from datetime import datetime

date_string = "2024-12-29 14:30:00" 
date_object = datetime.strptime(date_string, "%Y-%m-%d %H:%M:%S")
print("Datetime object:", date_object)

