#include <SDL.h>

#include "program.h"
#include "graphics.h"

/* Program Class
* This class holds all information and functions for main program loop
*/

Program::Program() {
	// Initialize SDL and start the program loop
	SDL_Init(SDL_INIT_EVERYTHING);
	this->programLoop();
}

Program::~Program() {
	// TODO end of program loop cleanup
}

void Program::programLoop() {
	bool exit = false;
	Graphics graphics;
	SDL_Event e;

	// Program Loop
	while (!exit) {

		// Loops through event stack until stack is empty
		while (SDL_PollEvent(&e) != 0) {
			// Exit the program loop when the exit button is clicked
			if (e.type == SDL_QUIT) {
				exit = true;
			}


		}
	}
}