/**
 * Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
 * 
 * How many such routes are there through a 20×20 grid?
 */

#include <iostream>

unsigned long long getNumRoutes(unsigned int gridSize, unsigned int xPos, unsigned int yPos, unsigned long long curNumRoutes)
{
	if(xPos < gridSize)
		curNumRoutes = getNumRoutes(gridSize, xPos + 1, yPos, curNumRoutes);
	if(yPos < gridSize)
		curNumRoutes = getNumRoutes(gridSize, xPos, yPos + 1, curNumRoutes);
	
	if(xPos != gridSize || yPos != gridSize)
		return curNumRoutes;
	else
		return curNumRoutes + 1;
}

unsigned long long getNumRoutes(unsigned int gridSize)
{
	return getNumRoutes(gridSize, 0, 0, 0);
}

int main()
{
	std::cout << getNumRoutes(20) << std::endl;
}