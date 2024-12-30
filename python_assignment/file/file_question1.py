def copy_file_skip_line(skip_line_number=5):
    """Copies content from 'space.txt' to 'output.txt', skipping the specified line number."""
    input_file = "space_file.txt"
    output_file = "output.txt"
    
    try:
        with open(input_file, 'r') as infile:
            lines = infile.readlines()
        
        with open(output_file, 'w') as outfile:
            for i, line in enumerate(lines, start=1):
                if i != skip_line_number:
                    outfile.write(line)
                    
        print(f"Content successfully copied to {output_file}, skipping line {skip_line_number}.")
    
    except FileNotFoundError:
        print(f"Error: The file {input_file} was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Call the function to process the file
copy_file_skip_line()


