#ifndef MAP_H
#define MAP_H

#include "Singleton.hpp"

struct Tile {
	char Symbol;
	bool Moveble;
};

class Map : public Singleton< Map >
{
public:
	void GenerateMap();

protected:
	Map();
	virtual ~Map();

private:

	friend Singleton< Map >;
};

#endif // MAP_H
