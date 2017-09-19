#include <iostream>
#include <string>
#include <fstream>

#include "save.h"

int main()
{
	entity player;
	std::string ans = "";
	bool play = true;

	player.lvl = 1;
	player.prog = 0;

	int num = 0;
	
	std::cout << "What is your name > ";
	std::getline(std::cin, ans);
	player.name = ans;

	std::cout << "rate your str on scale 1 - 10 > ";
	std::cin >> num;
	player.str = num;

	std::cout <<"rate your dex on scale 1 - 10 > ";
	std::cin >> num;
	player.dex = num;

	std::cout << "rate your wis on scale 1 - 10 > ";
	std::cin >> num;
	player.wis = num;

	std::cout << "rate your int on scale 1 - 10 > ";
	std::cin >> num;
	player.Int = num;

	std::getline(std::cin, ans);

	for (int i = 0; i < 10; i++)
	{
		std::cout << "what do you want to take with you (you get 10 items)" << std::endl;
		std::getline(std::cin, ans);
		player.items[i] = ans;\
	}

	while(play)
	{
		std::getline(std::cin, ans);

		if (ans == "save")
			saveGame(player);
		else if (ans == "load")
			loadGame(player);
		else if (ans == "quit")
			play = false;
		else if (ans == "help")
		{
			std::fstream file;
			file.open("menu.txt", std::ios::in);
			std::string buffer;
			while(std::getline(file, buffer))
				std::cout << buffer << std::endl;
		}
	}
	return 0;
}