#include <iostream>

#include "Aussiegochi.h"
#include "mixtape.h"

void product(float x, float y, float& z)
{
	z = x * y;
}

void swap(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

int main()
{
	/*int num = 0;
	int numtwo = 3;
	float flo = 6;
	float two = 3;
	float three = 0;
	bool tof = true;
	char letter = 'a';

	Aussiegochi pet;
	pet.happiness = 5;
	pet.hunger = 5;
	pet.sanity = 5;
	pet.thirsty = 5;

	product(flo, two, three);
	std::cout << (three) << std::endl;

	std::cout << num << "   " << numtwo << std::endl;
	swap(num, numtwo);
	std::cout << num << "   " << numtwo << std::endl;

	bool play = true;
	int ans = 0;
	while (play == true)
	{
		std::cout << "what would you like to do" << std::endl;
		std::cout << "1) feed" << std::endl;
		std::cout << "2) water" << std::endl;
		std::cout << "3) abuse" << std::endl;
		std::cout << "4) cuddle" << std::endl;
		std::cout << "5) quit" << std::endl;
		std::cin >> ans;

		if (ans == 1)
			feedAussie(pet);
		if (ans == 2)
			waterAussie(pet);
		if (ans == 3)
			abuseAussie(pet);
		if (ans == 4)
			coddleAussie(pet);
		if (ans == 5)
			play = false;
	}*/

	Track summer;
	summer.playtime = 3.45f;
	summer.trackName = "summer";

	Playlist music;
	music.playlistName = "driving";
	music.tracklist = new Track[10];
	music.tracklist[0] = summer;
	music.tracklist[1] = { "Keep it mello", 2.0f };
	music.tracklist[2] = { "Find me", 3.0f };
	music.tracklist[3] = { "Moving on", 4.0f };
	music.tracklist[4] = { "Alone", 5.0f };
	music.tracklist[5] = { "Alone", 2.50f };
	music.tracklist[6] = { "Love you", 2.40f };
	music.tracklist[7] = { "Faded", 2.34f };
	music.tracklist[8] = { "Sing me to sleep",  3.50f };
	music.tracklist[9] = { "Sandstorm", 5.40f };

	printPlaylist(music);
	shufflePlaylist(music);
	dedupePlaylist(music);

	while (true);
	return 0;
}