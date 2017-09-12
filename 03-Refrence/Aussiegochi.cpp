#include "Aussiegochi.h"

void feedAussie(Aussiegochi& aus)
{
	aus.hunger++;
}

void waterAussie(Aussiegochi& aus)
{
	aus.thirsty++;
}

void abuseAussie(Aussiegochi& aus)
{
	aus.sanity--;
}

void coddleAussie(Aussiegochi& aus)
{
	aus.happiness++;
}
