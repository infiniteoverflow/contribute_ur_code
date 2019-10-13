#include <stdio.h>

//------------------------------------------------------------
// Gets the number of digits in a given number.
//------------------------------------------------------------
int NumberOfDigits(int number)
{
	int counter = !number;

	// Iterate over the digits
	for (; number; number /= 10)
	{
		counter++;
	}

	return counter;
}

//------------------------------------------------------------
// Gets the sum of digits in a given number.
//------------------------------------------------------------
int SumOfDigits(int number)
{
	int sum = 0;

	// Iterate over the digits
	for (; number; number /= 10)
	{
		sum += number % 10;
	}

	return sum;
}

//------------------------------------------------------------
// Reverses a given number.
//------------------------------------------------------------
int ReverseNumber(int number)
{
	int reversed = 0;

	// Iterate over the digits
	for (; number; number /= 10)
	{
		reversed = (reversed * 10) + (number % 10);
	}

	return reversed;
}

//------------------------------------------------------------
// Raises a given number to a given power.
//------------------------------------------------------------
float Power(float base, int power)
{
	float result = 1;
	int positivePower = power > 0 ? power : -power;

	// Multiply the number
	for (; positivePower; positivePower--)
	{
		result *= base;
	}

	if (power < 0)
	{
		result = 1.0 / result;
	}

	return result;
}

//------------------------------------------------------------
// Gets the max number between two given numbers.
//------------------------------------------------------------
float max(float firstNumber, float secondNumber)
{
	return firstNumber > secondNumber ? firstNumber : secondNumber;
}

//------------------------------------------------------------
// Gets the min number between two given numbers.
//------------------------------------------------------------
float min(float firstNumber, float secondNumber)
{
	return firstNumber < secondNumber ? firstNumber : secondNumber;
}

//------------------------------------------------------------
// Checks the methods.
//------------------------------------------------------------
void main(void)
{
	int firstNumber;
	int secondNumber;

	printf("Enter an integer: ");
	scanf("%d", &firstNumber);

	printf("Enter a second integer: ");
	scanf("%d", &secondNumber);

	printf("\n");

	printf("The first number has %d digits.\n", NumberOfDigits(firstNumber));
	printf("The sum of digits of the first number is %d.\n", SumOfDigits(firstNumber));
	printf("The reversed number of the first number is %d\n", ReverseNumber(firstNumber));
	printf("The bigger number is %f\n", max(firstNumber, secondNumber));
	printf("The smaller number is %f\n", min(firstNumber, secondNumber));
	printf("The first number raised to the second number is %f\n", Power(firstNumber, secondNumber));
}