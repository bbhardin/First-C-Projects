/*
 * Screen.h
 *
 *  Created on: Dec 7, 2017
 *      Author: Ben
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>
#include <iostream>

namespace betaben {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;
	// An array to store frame times:
private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;
public:
	Screen();
	bool init();
	void update();
	void boxBlur();
	void clear();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
};

} /* namespace betaben */

#endif /* SCREEN_H_ */
