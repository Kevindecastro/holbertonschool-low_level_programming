# C - Bit manipulation

### Task 0: Convert Binary to Unsigned Integer

	* Function: binary_to_uint(const char *b)
	* Description: Converts a binary string to an unsigned integer.
	* Solution: You used a loop to iterate through the binary string and calculate its unsigned integer value.
	* Test: You correctly converted binary numbers like "1", "101", and "1100010" into their respective unsigned integer values.

### Task 1: Print Binary Representation

	* Function: print_binary(unsigned long int n)
	* Description: Prints the binary representation of a number without using arrays, malloc, or % and / operators.
	* Solution: The binary representation is printed bit by bit, starting from the most significant bit.
	* Test: For values like 0, 1, 98, and 1024, the correct binary representation was displayed.

### Task 2: Get the Value of a Bit at a Given Index

	* Function: get_bit(unsigned long int n, unsigned int index)
	* Description: Returns the value of a bit at a given index (0-based index).
	* Solution: You used a bitwise AND (&) operation to extract the bit at the specified index.
	* Test: For numbers like 1024, 98, and their bit positions, the function returned the expected values.

### Task 3: Set the Value of a Bit to 1

	* Function: set_bit(unsigned long int *n, unsigned int index)
	* Description: Sets the value of a bit to 1 at the specified index.
	* Solution: A bitwise OR (|) was used to set the desired bit.
	* Test: For numbers like 1024, 0, and 98, the function correctly set the respective bit.

### Task 4: Set the Value of a Bit to 0

	* Function: clear_bit(unsigned long int *n, unsigned int index)
	* Description: Sets the value of a bit to 0 at the specified index.
	* Solution: A bitwise AND (&) with the negation of the mask (created using bitwise NOT) was used to clear the bit.
	* Test: For numbers like 1024, 0, and 98, the function correctly cleared the specified bits.

### Task 5: Count the Number of Bits to Flip

	* Function: flip_bits(unsigned long int n, unsigned long int m)
	* Description: Returns the number of bits you need to flip to get from one number to another.
	* Solution: The XOR (^) operation was used to identify differing bits, and a loop counted the set bits (1s) 
	  to determine the number of flips needed.
	* Test: The function correctly calculated the number of bit flips required for pairs like 1024 and 1, 402 and 98.
