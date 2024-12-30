def check_file_empty():
    """Checks if the given file is empty."""
    file_name = input("Enter the file name:").strip()
    try:
        with open(file_name, 'r') as file:
            # Check if the file is empty by reading its first character
            if file.read(1):
                print(f"The file '{file_name}' is not empty.")
            else:
                print(f"The file '{file_name}' is empty.")
    except FileNotFoundError:
        print(f"Error: The file '{file_name}' does not exist.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Call the function to check the file
check_file_empty()

