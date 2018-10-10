/*
BITWISE OPERATIONS IN C, thanks for the help!
After this tutorial, you will be able to:
 use bitwise operations to get and store information in a single bit position
 retrieve and manipulate data from multi-dimensional arrays.

Tutorial
Download the file T03.tar from the tutorial page.
Implement the functions getBit(), setBit(), and clearBit() as prototyped.
Using the functions you just wrote, implement the function printBits() as prototyped. The output of printBits('A') should be:
0100 0001

Write code to accomplish the following:
Clear the bit position 6 from all values in arr.
Set the bit position 3 for all values in arr.
Output all values in arr.

Exercises
Write a function printIntBits(int c), which prints the bits of an integer parameter.
Write a function printIntHex(int c), which prints the hexadecimal representation of an integer
parameter. Don't forget to precede the number with '0x'.

Suppose we have an array arr[m][n], which we would like to represent as a one-dimensional array
arrFlat[m*n] (for example, arr[5][5] would be represented as arrFlat[25])

Write a function index(int j, int k, int n), which returns a unique and valid index in the one-
dimensional array for each valid pair (j, k) of indices in the m x n 2D array.

Write the inverse functions index_m(int i, int n) and index_n(int i, int n) which give a
unique, valid pair of indices in the m x n 2D array for each valid index in the 1D array.

NOTE: if implemented correctly index(index_m(a, n), index_n(a, n), n) == a, as long as a is
a valid index.

Write similar functions for a 3D to 1D transformation.
Here is the file:
*/

#include <stdio.h>

/* MASK to represent the MSB of character, i.e. 1000 0000 */
#define MASK_MSB  0x80
/* MASK to represent the MSB of character, i.e. 0000 0001 */
#define MASK_LSB  0x01

unsigned char getBit(unsigned char, int);
unsigned char setBit(unsigned char, int);
unsigned char clearBit(unsigned char, int);
void printBits(unsigned char);
void printIntBits(unsigned int);
void printIntHex(unsigned int);
int index_1d(int, int, int);

int main() {
	unsigned char a = 'A';
	unsigned char arr[2][3][4] = {
									{
										{62,138,241,129},
										{8,221,163,159},
										{91,158,169,150}
									},
									{
										{15,138,251,198},
										{14,211,161,158},
										{77,204,188,217}
									}
								};
	int i, j, k;

	printBits(a);
	
	a = setBit(a, 2);
	a = setBit(a, 3);
	
	printBits(a);
	
	a = clearBit(a, 2);
	
	printBits(a);
	
	printf("\n");
	/* implement question 4 here */

	/*
		Write code to accomplish the following:
		Clear the bit position 6 from all values in arr.
		Set the bit position 3 for all values in arr.
		output all values in arr.
	*/

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			for(k = 0; k < 4; k++) {
				// clear bit at position 6
				arr[i][j][k] = clearBit(arr[i][j][k], 6);
				// set bit at position 3
				arr[i][j][k] = setBit(arr[i][j][k], 3);
				printf("%d ", arr[i][j][k]);
			}
		}
	}
	printf("\n");

	printIntBits(99);
	printf("\n");
	printIntHex(99);



	return 0;
}

/* Get nth bit from character c 
	assuming n >= 0 
	and we have 0 based index here
*/
unsigned char getBit(unsigned char c, int n) {
	char bit = 0;
	bit = ((c >> n) & 1);	
	return bit;
}

unsigned char setBit(unsigned char c, int n) {
	c |= (1 << n);
	return c;
}

unsigned char clearBit(unsigned char c, int n) {
	c &= ~(1 << n);
	return c;
}

/*
 * Function to print the input character in binary form
 * i.e. for input 'A' will be represented as 01000001 (41 ASCII value)
 */
void printBits(unsigned char c) {
	/* There are 8 bits in a char */
	int i = 0;
	for (i = 8; i > 0; i--) {
      printf("%d", getBit(c, i-1));
  	}
  	printf("\n");
}

/* Recusrive Function to convert the interger to binary form */
void printIntBits(unsigned int n) {
	if (n > 1)  {
    	printIntBits(n>>1); 
	}
      
    printf("%d", n & 1); 
}

void printIntHex(unsigned int n) {
	printf("0x%x\n", n);
}

/*
Suppose we have an array arr[m][n], which we would like to represent as a one-dimensional array
arrFlat[m*n] (for example, arr[5][5] would be represented as arrFlat[25])

Write a function index(int j, int k, int n), which returns a unique and valid index in the one-
dimensional array for each valid pair (j, k) of indices in the m x n 2D array.
*/

/* Given prototype is of row major type we will use following formula 
 	to get the index 
 	m * n 
 	m = total rows / height
 	n = total columns / width
 	i = row
 	j = column

 	index = (row * width) + column
*/
int index_1d(int j, int k, int n) {
	return ((j * n) + k);
}


Output
01000001
01001101
01001001

62 138 185 137 8 157 171 159 27 158 169 158 15 138 187 142 14 155 169 158 13 140 188 153 
1100
