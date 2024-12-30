# To plot the graph in bar graph
import matplotlib.pyplot as plt

# Data for sales per month
months = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
bathing_soap_sales = [8000, 9500, 10200, 9700, 9100, 9600, 8900, 9200, 9800, 10500, 11200, 12600]

# Create the bar chart
plt.figure(figsize=(10, 6))
plt.bar(months, bathing_soap_sales, color='blue')

# Add labels and title
plt.xlabel('Month Number')
plt.ylabel('Sales units in number')
plt.title('Sales Data of Bathing Soap')

# Add grid for better readability
plt.grid(True, axis='y', alpha=0.6)

# Save the plot
plt.savefig('bathing_soap_sales.png')

# Show the plot
plt.show()

