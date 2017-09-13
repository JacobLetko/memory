#include <iostream>
#include <fstream> // file streaming
#include <string>

#include "entity.h"

void digitalPrinter()
{
	std::fstream file;
	std::string answer;
	std::cout << " what file do you want to open?" << std::endl;
	std::cin >> answer;

	file.open(answer, std::ios::in);

	if (file.fail())
		std::cout << "File not found" << std::endl;
	
	std::string buffer;
	while(std::getline(file, buffer))
	{
		std::cout << buffer << std::endl;
	}
	file.flush();
	file.close();
}

void info()
{
	std::fstream file;
	std::string fileName;
	std::string name;
	int age;
	
	std::cout << "what is the name of the file" << std::endl;
	std::getline(std::cin, fileName);

	file.open(fileName + ".txt", std::ios::out);
	
	if (file.fail())
		std::cout << "failed top create new file" << std::endl;

	std::cout << "what is you name?" << std::endl;
	std::getline(std::cin, name);
	file << std::endl << "name: " << name;

	std::cout << "How old are you?" << std::endl;
	std::cin >> age;
	file << std::endl << "age: " << age;

	file.flush();
	file.close();

	std::cout << "All done" << std::endl;
}

void toner()
{
	std::fstream file;
	file.open("importantMessage.txt");

	if (file.fail())
		std::cout << "failed to open file" << std::endl;

	std::string buffer;
	while (std::getline(file, buffer))
	{
		for (int i = 0; i < buffer.size(); i++)
		{
			if (i % 5 == 0)
				std::cout << " ";
			else
				std::cout << buffer[i];
		}
		std::cout << "\n";
	}
}

void comma()
{
	std::fstream file;

	file.open("commaSep.txt", std::ios::in);

	int nums[9];
	int index = 0;
	std::string buffer;

	while (std::getline(file, buffer))
	{
		for (int i = 0; i < buffer.size(); i++)
		{
			int x = (buffer[i]) - '0';
			nums[index] = x;
		}
		index++;
	}

	for (int i = 0; i < 9; i++)
		std::cout << nums[i] << ", ";
}

void addEntity()
{
	std::fstream file;
	file.open("entityManifest.txt", std::ios::in);

	Entity player;
	Entity dungeonMimic;
	Entity orangeSlime;
	Entity kinsman;
	Entity woofers;

	std::string buffer;
	int contine = 0;

	float stats[6];

	while (std::getline(file, buffer) && contine == 0)
	{
		if (buffer[0] == '@')
			contine++;
		for (int i = 0; i < 6; i++)
		{
			std::getline(file, buffer);
			stats[i] = std::atof(buffer.c_str());
		}
	}

	player = { stats[0], stats[1], (int)stats[2], (int)stats[3], (int)stats[4], (int)stats[5] };
	std::cout << player.agility;
}

int main()
{
	//digitalPrinter();
	//info();
	//toner();
	//comma();
	addEntity();
	while (true);

	return 0;
}