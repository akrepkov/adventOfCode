import re

def main():
	result = 0
	file = open('input_for_python_1.txt', 'r')
	for line in file:
		first_digit = None
		last_digit = None		
		for i in line:
			if i.isdigit():
				if first_digit == None:
					first_digit = int(i)
				last_digit = int(i)
		if first_digit is not None and last_digit is not None:
			result_line = first_digit * 10 + last_digit
		result += result_line
	print("Result: ", result)
	file.close()

if __name__ == "__main__":
    main()