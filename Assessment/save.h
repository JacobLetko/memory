#pragma once
#include <string>


struct entity
{
	std::string name;
	
	int lvl;
	int str;
	int dex;
	int wis;
	int Int;

	int prog;
	std::string items[10];
};

void saveGame(entity & player);
void loadGame(entity & player);