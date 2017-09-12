#pragma once

/* class Program
* This class holds all information and functions for main program loop.
*/

struct Graphics;

class Program {
public:
	Program();
	~Program();
private:
	void programLoop();
	void draw(Graphics &graphics);
	void update();
};