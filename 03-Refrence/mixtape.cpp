#include <iostream>
#include <random>
#include <ctime>

#include "mixtape.h"

void printPlaylist(const Playlist & pl)
{
	std::cout << pl.playlistName << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "["<< (int)pl.tracklist[i].playtime << ":" << (pl.tracklist[i].playtime - (int)pl.tracklist[i].playtime) * 100 << "]	- " << (pl.tracklist[i].trackName) << std::endl;//(int)pl.tracklist[i] << ":" << (pl.tracklist[i] - (int)pl.tracklist[i]) * 100
	}
}

void shufflePlaylist(Playlist & pl)
{
	srand(time(NULL));
	Track empty;
	for (int i = 0; i < 10; i++)
	{	
		int y = rand() % 10;
		int x = rand() % 10;

		empty = pl.tracklist[x];
		pl.tracklist[x] = pl.tracklist[y];
		pl.tracklist[y] = empty;
	}
	printPlaylist(pl);
}

void dedupePlaylist(Playlist & pl)
{
	for (int i = 0; i < 10; i++)
	{
		for (int k = i + 1; k < 10; k++)
		{
			if (pl.tracklist[i].trackName == pl.tracklist[k].trackName)
			{
				pl.tracklist[i].trackName = "";
				pl.tracklist[i].playtime = 0.0f;
			}
		}
	}

	printPlaylist(pl);
}
