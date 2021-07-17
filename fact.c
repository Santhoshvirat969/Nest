// C program to find factorial of given number

#include <stdio.h>

// Function to find factorial of given number
unsigned int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
echo "you have your factorial of $n"


