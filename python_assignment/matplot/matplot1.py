import matplotlib.pyplot as plt

# Data for total profit per month
months = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
total_profit = [200000, 250000, 300000, 350000, 400000, 450000, 300000, 400000, 500000, 450000, 400000, 350000]



# Create the line plot
plt.plot(months, total_profit, marker='o', color='b', label='Profit')

# Add labels and title
plt.xlabel('Month Number')
plt.ylabel('Total Profit')
plt.title('Company Profit per Month')

# Display the plot
plt.show()

