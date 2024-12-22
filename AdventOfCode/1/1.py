# Define the file paths
input_file = '/Users/aditya/Documents/CP/AdventOfCode/1/input.txt'  # Input file containing the numbers
output_file_1 = '/Users/aditya/Documents/CP/AdventOfCode/1/output_1.txt'  # Output file for the first column
output_file_2 = '/Users/aditya/Documents/CP/AdventOfCode/1/output_2.txt'  # Output file for the second column

# Read the input file and separate the numbers
with open(input_file, 'r') as file:
    lines = file.readlines()

# Initialize lists for the two columns
column_1 = []
column_2 = []

# Process each line to separate the columns
for line in lines:
    # Split by spaces or tabs and strip any extra whitespace
    numbers = line.strip().split()
    if len(numbers) == 2:
        column_1.append(numbers[0])
        column_2.append(numbers[1])

# Write the first column to the output file
with open(output_file_1, 'w') as file1:
    for number in column_1:
        file1.write(number + '\n')

# Write the second column to the output file
with open(output_file_2, 'w') as file2:
    for number in column_2:
        file2.write(number + '\n')

print("Results have been written to", output_file_1, "and", output_file_2)
