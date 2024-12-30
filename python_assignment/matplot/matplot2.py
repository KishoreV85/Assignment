# Program to plot the given data
import matplotlib.pyplot as plt

# Data for sales per month for each product
months = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]

# Sales data (approximated from the graph)
face_cream_sales = [2500, 2600, 2800, 2900, 3000, 3200, 3300, 3400, 3500, 3600, 3700, 3800]
face_wash_sales = [1500, 1600, 1700, 1800, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700]
toothpaste_sales = [4900, 5000, 5200, 5300, 5400, 5500, 5600, 5700, 5800, 5900, 6000, 6100]
bathing_soap_sales = [8000, 8100, 8200, 8300, 8400, 8500, 8600, 8700, 8800, 8900, 9000, 9100]
shampoo_sales = [1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600]
moisturizer_sales = [1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100]

# Plot each product's sales data
plt.plot(months, face_cream_sales, marker='o', color='red', label='Face Cream Sales Data')
plt.plot(months, face_wash_sales, marker='o', color='green', label='Face Wash Sales Data')
plt.plot(months, toothpaste_sales, marker='o', color='pink', label='Toothpaste Sales Data')
plt.plot(months, bathing_soap_sales, marker='o', color='orange', label='Bathing Soap Sales Data')
plt.plot(months, shampoo_sales, marker='o', color='purple', label='Shampoo Sales Data')
plt.plot(months, moisturizer_sales, marker='o', color='blue', label='Moisturizer Sales Data')

# Add labels, title, and legend
plt.xlabel('Month Number')
plt.ylabel('Sales units in number')
plt.title('Sales data')
plt.legend(loc='upper left')

# Show the plot
plt.show()

