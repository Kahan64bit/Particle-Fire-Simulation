#include <iostream>
#include "Screen.h"
#include <SDL.h>
#undef main

// using namespace set;

int main()
{

	set::Screen screen;
	if (screen.init() == false)
	{
		std::cout << "Error initalising SDL " << std::endl;
	}
	
	while(true)
	{
		// Update particles
		// Draw particles
		// Check for messages/events

		if (screen.processEvents() == false)
		{
			break;
		}
		
	}

	screen.close();

	return 0;
}