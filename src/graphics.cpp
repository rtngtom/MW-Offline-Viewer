#include <SDL.h>
#include <SDL_image.h>

#include "../include/graphics.h"

/* Graphics class
* Holds all information dealing with graphics for the program.
*/

// Declare the window size
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

Graphics::Graphics() {
	// Create a window that is visible, and capable of rendering
	SDL_CreateWindowAndRenderer(SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN, &this->_window, &this->_renderer);
	SDL_SetWindowTitle(this->_window, "Mythweavers Offline Viewer");
}

Graphics::~Graphics() {
	// Closes window
	SDL_DestroyWindow(this->_window);
}

SDL_Surface* Graphics::loadImage(const std::string &filePath) {
	// Loads image at specified url using IMG_Load
	return IMG_Load(filePath.c_str());
}

void Graphics::showImage(SDL_Texture* texture, SDL_Rect* destinationRectangle) {
	// Displays the texture specified at the location specified
	SDL_RenderCopy(this->_renderer, texture, NULL, destinationRectangle);
}

void Graphics::flip() {
	// Updates the renderer
	SDL_RenderPresent(this->_renderer);
}

void Graphics::clear() {
	// Clears the renderer
	SDL_RenderClear(this->_renderer);
}

SDL_Renderer* Graphics::getRenderer() const {
	return _renderer;
}