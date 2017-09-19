#include <iostream>
#include <fstream>

#include "save.h"

void saveGame(entity & player)
{
	std::fstream file;
	int ans;
	char cans;
	
	std::cout << "which file do you want to over write (1) (2) (3)" << std::endl;
	std::cin >> ans;
	std::cout << "are you sure (y/n)" << std::endl;
	std::cin >> cans;
	
	if (cans == 'y')
	{
		if (ans == 1)
		{
			file.open("saveStateOne.txt", std::ios::in | std::ios::out);
			file << std::endl << player.name;
			file << std::endl << player.lvl;
			file << std::endl << player.str;
			file << std::endl << player.dex;
			file << std::endl << player.wis;
			file << std::endl << player.Int;
			file << std::endl << player.prog;
			
			for (int i = 0; i < 10; i++)
			{
				file << std::endl << player.items[i];
			}

			std::cout << "game saved" << std::endl;
		}

		if (ans == 2)
		{
			file.open("saveStateTwo.txt", std::ios::in | std::ios::out);
			file << std::endl << player.name;
			file << std::endl << player.lvl;
			file << std::endl << player.str;
			file << std::endl << player.dex;
			file << std::endl << player.wis;
			file << std::endl << player.Int;
			file << std::endl << player.prog;

			for (int i = 0; i < 10; i++)
			{
				file << std::endl << player.items[i];
			}

			std::cout << "game saved" << std::endl;
		}

		if (ans == 3)
		{
			file.open("saveStateThree.txt", std::ios::in | std::ios::out);
			file << std::endl << player.name;
			file << std::endl << player.lvl;
			file << std::endl << player.str;
			file << std::endl << player.dex;
			file << std::endl << player.wis;
			file << std::endl << player.Int;
			file << std::endl << player.prog;

			for (int i = 0; i < 10; i++)
			{
				file << std::endl << player.items[i];
			}

			std::cout << "game saved" << std::endl;
		}
	}
}

void loadGame(entity & player)
{
	std::fstream file;
	std::string buffer;

	int index = 0;
	int num = 0;
	int stats[6];
	std::string items[10];
	std::string name;

	int ans;
	char cans;

	std::cout << "which file do you want to load (1) (2) (3)" << std::endl;
	std::cin >> ans;
	std::cout << "are you sure (y/n)" << std::endl;
	std::cin >> cans;

	if (cans == 'y')
	{
		if (ans == 1)
		{
			file.open("saveStateOne.txt", std::ios::in | std::ios::out);

			while (std::getline(file, buffer))
			{
				if (index == 1)
					name = buffer;
				if (index > 1 && index < 8)
				{
					stats[num] = std::stoi(buffer);
					num++;
				}
				if (index == 8)
					num = 0;
				if (index > 7)
				{
					items[num] = buffer;
					num++;
				}
				index++;
			}

			player = {name,
				stats[0], stats[1], stats[2], stats[3], stats[4], stats[5],
				items[0], items[1], items[2], items[3], items[4],
				items[5], items[6], items[7], items[8], items[9]};
			std::cout << "game lodaed" << std::endl;
		}

		if (ans == 2)
		{
			file.open("saveStateTwo.txt", std::ios::in | std::ios::out);

			while (std::getline(file, buffer))
			{
				if (index == 1)
					name = buffer;
				if (index > 1 && index < 8)
				{
					stats[num] = std::stoi(buffer);
					num++;
				}
				if (index == 8)
					num = 0;
				if (index > 7)
				{
					items[num] = buffer;
					num++;
				}
				index++;
			}

			player = { name,
				stats[0], stats[1], stats[2], stats[3], stats[4], stats[5],
				items[0], items[1], items[2], items[3], items[4], 
				items[5], items[6], items[7], items[8], items[9] };
			std::cout << "game lodaed" << std::endl;
		}

		if (ans == 3)
		{
			file.open("saveStateThree.txt", std::ios::in | std::ios::out);

			while (std::getline(file, buffer))
			{
				if (index == 1)
					name = buffer;
				if (index > 1 && index < 8)
				{
					stats[num] = std::stoi(buffer);
					num++;
				}
				if (index == 8)
					num = 0;
				if (index > 7)
				{
					items[num] = buffer;
					num++;
				}
				index++;
			}

			player = { name,
				stats[0], stats[1], stats[2], stats[3], stats[4], stats[5],
				items[0], items[1], items[2], items[3], items[4],
				items[5], items[6], items[7], items[8], items[9] };
			std::cout << "game lodaed" << std::endl;
		}
	}
}
