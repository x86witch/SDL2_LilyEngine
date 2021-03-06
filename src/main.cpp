/**
 * @file main.cpp
 * @author lilitharcana (lilithalicecrawford@gmail.com)
 * @brief Main function to show how to run an example game created with LilyEngine::BaseGame.
 * @details follow this guide to set up VS Code with SDL2: https://giovanni.codes/setup-sdl2-with-visual-studio-code-and-mingw64-on-windows/
 * If you want SDL2_ttf, SDL2_image, etc, you must download the MinGW development libraries & also the x64/x86 runtime binaries to do the same:
 * 1.) in tasks.json, under "tasks"/"args", add the /include/SDL2 folder with -I:
 * 		"-IC:/Users/lilit/Dev/Libraries/SDL2-mingw/SDL2-2.0.14/x86_64/include/SDL2"
 * 2.) also under "tasks"/"args", add the /lib folder with -L:
 * 		"-LC:/Users/lilit/Dev/Libraries/SDL2-mingw/SDL2-2.0.14/x86_64/lib",
 * 3.) again under "args", add the .lib files to the linker with -l:
 * 		"-lSDL2main", "-lSDL2", "-lSDL2_ttf", "-lSDL2_image", etc...
 * 4.) in c_cpp_properties.json, under "configurations"/"includePath", add your \\include\\SDL2 folders to update IntelliSense:
 * 		"C:\\Users\\lilit\\Dev\\Libraries\\SDL2-mingw\\SDL2-2.0.14\\x86_64\\include\\SDL2"
 * 5.) in your build folder, copy all the runtime .dll binaries:
 * 		SDL2.dll, SDL2_ttf.dll, zlib1.dll, libfreetype-6.dll, SDL2_image.dll, libpng16-16.dll, libjpeg-9.dll, libtiff-5.dll, libwebp-7.dll, etc...
 * 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "ExampleGame.hpp"

/**
 * @brief Main function, creates a game object, runs it, and then deletes it.
 * 
 * @param argv number of arguments passed to the program
 * @param args strings of arguments passed to the program
 * @return int exit code
 */
int main(int argv, char** args)
{
	ExampleGame* game = new ExampleGame();
	game->run();
	delete game;

	return 0;
}