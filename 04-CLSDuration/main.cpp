#include <iostream>
#include <random>
#include <ctime>

#include "globals.h"
#include "incdec.h"

int halfLove = 1;
int fizzBuzz = 0;
int pick = 0;

void releaseHalfLove()
{
	if (halfLove < 3)
	{
		std::cout << "the game, Half-Love " << halfLove << ", was released" << std::endl;
		halfLove++;
	}
	else
		halfLove = 1;
}

void stepFizzBuzz()
{
	if (fizzBuzz % 5 == 0 && fizzBuzz % 3 == 0)
		std::cout << "FizzBuzz" << std::endl;
	else if (fizzBuzz % 5 == 0)
		std::cout << "Buzz" << std::endl;
	else if (fizzBuzz % 3 == 0)
		std::cout << "Fizz" << std::endl;
	else
		std::cout << fizzBuzz << std::endl;
	fizzBuzz++;
}

float divide(float x, float y)
{
	if (x != 0 && y != 0)
		return x / y;
	else
	{
		std::cout << "cant divided by zero" << std::endl;
		return 0.0f;
	}
}

void callMeMaybe()
{
	srand(time(NULL));
	int x = rand() % 100;

	for (int i = 0; i < x; i++)
	{
		if (i % 2 == 0)
			std::cout << "1" << std::endl;
		else
			std::cout << "0" << std::endl;
	}
}

int picker(int optA, int optB, int optC)
{
	if (pick == 3)
		pick = 0;

	if (pick == 0)
	{
		pick++;
		return optA;
	}
	else if (pick == 1)
	{
		pick++;
		return optB;
	}
	else if (pick == 2)
	{
		pick++;
		return optC;
	}
}

// Copies the contents of the source array into the destination array
// - This should fail if you copy into a dst that is smaller than the src.
int arrayCopy(int * srcArr, size_t srcSize, int * dstArr, size_t dstSize)
{
	if (srcSize > dstSize)
	{
		std::cout << "FAIL" << std::endl;
		return NULL;
	}
	else
	{
		dstArr = srcArr;
		return 0;
	}
}

// Prints an array of Xs with the provided dimensions
// - This should fail if a negative value is provided for the width or height.
void gridGen(int width, int height)
{
	if (width < 0 || height < 0)
		std::cout << "FAIL" << std::endl;
	else
		for (int i = 0; i < height; i++)
		{
			for (int k = 0; k < width; k++)
				std::cout << "X";
			std::cout << "\n";
		}
}

// Converts all letters in an cstring to uppercase.
// - This should fail if any non-alphanumeric characters are detected.
void toUpper(char * cstr)
{
	//65 - 90
	for (int i = 0; i < 20; i++)
	{
		if ((int)cstr[i] >= 65 && (int)cstr[i] <= 90 && (int)cstr[i] >= 97 && (int)cstr[i] <= 122)
		{
			if ((int)cstr[i] <= 122 && (int)cstr[i] >= 97)
			{
				cstr[i] = (int)cstr - 32;
			}
		}
	}

	
}

// Converts all letters in an cstring to uppercase.
// - This should fail if any non-alphanumeric characters are detected.
void toLower(char * cstr)
{
	//97 - 122
	for (int i = 0; i < 20; i++)
	{
		if ((int)cstr[i] >= 65 && (int)cstr[i] <= 90 && (int)cstr[i] >= 97 && (int)cstr[i] <= 122)
		{
			if ((int)cstr[i] <= 90 && (int)cstr[i] >= 65)
			{
				cstr[i] = (int)cstr + 32;
			}
		}
	}
}

// Prints the contents of a text file to the terminal.
// - This should fail if the file you're attempting to load does not exist.
void printFile(char * filePath)
{

}

int main()
{
	//releaseHalfLove();
	//stepFizzBuzz();
	
	/*std::cout << counter << std::endl;
	increment();
	std::cout << counter << std::endl;
	decrement();
	std::cout << counter << std::endl;*/

	//std::cout << divide(0, 2) << std::endl;
	//callMeMaybe();

	/*std::cout << picker(1, 2, 3) << std::endl;
	std::cout << picker(1, 2, 3) << std::endl;
	std::cout << picker(1, 2, 3) << std::endl;
	std::cout << picker(1, 2, 3) << std::endl;
	std::cout << picker(1, 2, 3) << std::endl;*/

	while (true);
	return 0;
}