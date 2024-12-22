import re

def parse_input(file_path):
    with open(file_path, 'r') as file:
        data = file.read()
    return data

def process_instructions(data):
    # Regular expressions to match instructions
    mul_pattern = re.compile(r'mul\((\d+),(\d+)\)')
    do_pattern = re.compile(r'do\(\)')
    dont_pattern = re.compile(r"don't\(\)")

    # Initialize the state and result
    is_enabled = True
    total_sum = 0

    # Iterate through the matches
    for match in re.finditer(r'mul\(\d+,\d+\)|do\(\)|don\'t\(\)', data):
        instruction = match.group(0)

        if instruction == 'do()':
            is_enabled = True
        elif instruction == "don't()":
            is_enabled = False
        else:
            # It's a mul() instruction
            if is_enabled:
                x, y = map(int, mul_pattern.match(instruction).groups())
                total_sum += x * y

    return total_sum

def main():
    # Path to the input file
    file_path = '/Users/aditya/Documents/CP/AdventOfCode/3/input.txt'
    data = parse_input(file_path)
    result = process_instructions(data)
    print(f"Sum of enabled multiplications: {result}")

if __name__ == "__main__":
    main()





# Total sum of enabled mul instructions: 178794710