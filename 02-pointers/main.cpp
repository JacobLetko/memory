#include <iostream>

void printFloats(float * arr, int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << *(arr + i) << std::endl;
}
void printNotfloats(int * arr, int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << *(arr + i) << std::endl;
}

int arraySum(int * arr, int size)
{
	int x = 0;
	for (int i = 0; i < size; i++)
		x += *(arr + i);
	return x;
}

float arrayAvg(int * arr, int size)
{
	int x = 0;
	for (int i = 0; i < size; i++)
		x += *(arr + i);
	return x / size;
}

int findCount(int target, int * arr, int size)
{
	int frequency = 0;
	for (int i = 0; i < size; i++)
		if (*(arr + i) == target)
			frequency++;
	return frequency;
}

void arrCopy(int * arr, int scrSize, int * distArr, int dsrSize)
{
	
	for (int i = 0; i < scrSize; i++)
		*(distArr + i) = *(arr + i);
}

void arrReversal(int * arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		*(arr + ((size - 1) - i)) = *(arr + i) + *(arr + ((size - 1) - i));
		*(arr + i) = *(arr + ((size - 1) - i)) - *(arr + i);
		*(arr + ((size - 1) - i)) = *(arr + ((size - 1) - i)) - *(arr + i);
	}
}

void cstReversal(char * arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		*(arr + ((size - 1) - i)) = *(arr + i) + *(arr + ((size - 1) - i));
		*(arr + i) = *(arr + ((size - 1) - i)) - *(arr + i);
		*(arr + ((size - 1) - i)) = *(arr + ((size - 1) - i)) - *(arr + i);
	}
}

void subcstr(int start, int end, char * scrArr, char * destArr)
{
	int x = 0;
	for (int i = start; i < end; i++)
	{
		*(destArr + x) = *(scrArr + i);
		x++;
	}
}

int main()
{
	float* arr = new float[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i;

	int * intArr = new int[10];
	for (int i = 0; i < 10; i++)
		intArr[i] = i;

	int * intarr = new int[20];

	char * name = new char[20];
	name = { "Jacob Letko" };

	printFloats(arr, 10);
	printNotfloats(intArr, 10);
	std::cout << arraySum(intArr, 10) << std::endl;
	std::cout << arrayAvg(intArr, 10) << std::endl;
	std::cout << findCount(2, intArr, 10) << std::endl;
	arrCopy(intArr, 10, intarr, 20);
	std::cout << "LITLE ARRAY" << std::endl;
	printNotfloats(intarr, 20);
	arrReversal(intarr, 20);
	std::cout << "reverse" << std::endl;
	printNotfloats(intarr, 20);
	cstReversal(name, 20);



	while (true);
	return 0;
}