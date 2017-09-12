#pragma once
#include <string>
#include <iostream>

struct Track
{
	std::string trackName;
	float playtime;
};

struct Playlist
{
	std::string playlistName;
	Track * tracklist;
};

void printPlaylist(const Playlist& pl);
void shufflePlaylist(Playlist& pl);
void dedupePlaylist(Playlist& pl);