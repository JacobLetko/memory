#include <iostream>

void printArray(int array[], int size)
{
	for (int i = 0; i <= size; i++)
		std::cout << array[i] << std::endl;
}

int diff(int a, int b)
{
	return a - b;
}

void threes(int Array[], int size)
{
	int three = 3;
	for (int i = 0; i <= size; i++)
	{
		Array[i] = three * i;
	}
}

void quastionar()
{
	int size = 0;
	std::cout << "How many numbers do you want to give > ";
	std::cin >> size;
	int num= 0;
	int odd = 0;
	int even = 0;
	//int x = 1; 

	int* numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "whats the " << i + 1 << " number > ";
		std::cin >> num;
		numbers[i] = num;
		if (num % 2 == 0)
			even++;
		else
			odd++;
	}

	if (even > odd)
		std::cout << "you like even numbers" << std::endl;
	else
		std::cout << "you like odd numbers" << std::endl;
}

void countingToTwentyOne()
{
	int size = 0;
	std::cout << "How many numbers do you think you need > ";
	std::cin >> size;
	int num = 0;
	int ans = 0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "whats the " << i + 1 << " number > ";
		std::cin >> num;
		ans += num;
	}
	
	if (ans == 21)
		std::cout << "you can add to 21 congrats" << std::endl;
	else
		std::cout << "sorry that dosent add to 21" << std::endl;
}

int main()
{
	int* age = new int(20);
	float* num = new float(5);
	bool* alive = new bool(true);
	int* listOfAges = new int[100];
	float* numArray = new float[10];
	bool* truth = new bool[10];
	
	for (int i = 0; i <= 100; i++)
	{
		listOfAges[i] = i;
	}

	std::cout << *age << std::endl;
	std::cout << "\n";
	std::cout << diff(*age, *num) << std::endl;
	std::cout << "\n";
	printArray(listOfAges, 100);
	std::cout << "\n";
	threes(listOfAges, 100);
	printArray(listOfAges, 100);
	quastionar();
	countingToTwentyOne();
	
	while (true) {}
	
	delete age;
	delete num;
	delete alive;
	delete[] listOfAges;
	delete[] numArray;
	delete[] truth;
	return 0;
}