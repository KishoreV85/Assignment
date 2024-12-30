# Program to sketch bathing soap facewash of all months.
# Display it using the subplot
import matplotlib.pyplot as plt

# Data for sales per month
months = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
bathing_soap_sales = [8000, 9500, 10200, 9700, 9100, 9600, 8900, 9200, 9800, 10500, 11200, 12600]
face_wash_sales = [1500, 1700, 1600, 1740, 1550, 1490, 1780, 1650, 1550, 1700, 1800, 1600]

# Create subplots
plt.figure(figsize=(10, 6))

# Subplot 1: Bathing Soap Sales
plt.subplot(2, 1, 1)
plt.plot(months, bathing_soap_sales, marker='o', color='black')
plt.title('Sales data of a Bathing Soap')
plt.ylabel('Sales units in number')

# Subplot 2: Face Wash Sales
plt.subplot(2, 1, 2)
plt.plot(months, face_wash_sales, marker='o', color='red')
plt.title('Sales data of a Face Wash')
plt.xlabel('Month Number')
plt.ylabel('Sales units in number')

# Adjust layout to prevent overlapping
plt.tight_layout()

# Show the plot
plt.show()

