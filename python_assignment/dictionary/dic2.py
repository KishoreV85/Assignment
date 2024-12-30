# Input values given in the question
employees = ['Kelly', 'Emma']
defaults = {"designation": 'Developer', "salary": 8000}

# Use dictionary comprehension to initialize with defaults
employee_dict = {employee: defaults.copy() for employee in employees}
print("Dictionary with default values:", employee_dict)

