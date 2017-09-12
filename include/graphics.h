#pragma once

#include <string>

struct SDL_Window;
struct SDL_Renderer;
struct SDL_Surface;

/* Graphics class
* Holds all information dealing with graphics for the game.
*/

class Graphics {
public:
	/* Constructor/Destructor
	* Makes the creation and destruction of a Graphics class possible from other classes
	*/
	Graphics();
	~Graphics();

	/* SDL_Surface* loadImage
	* Load image into _spriteSheets map, if unloaded, then returns the requested image.
	*/
	SDL_Surface* loadImage(const std::string &filePath);

	/* void blitzSurface
	* Draw texture to certain part of screen
	*/
	void showImage(SDL_Texture* texture, SDL_Rect* destinationRectangle);

	/* void flip
	* Render everything to the screen
	*/
	void flip();

	/* void clear
	* Clear everything on the screen
	*/
	void clear();

	/* SDL_Renderer* getRenderer
	* Returns the renderer
	*/
	SDL_Renderer* getRenderer() const;
private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;
};