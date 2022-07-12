#include "main.h"

int running;
int game_state;
int main()
{
    srand(time(NULL));
    running = 1;
    game_state = GAME;
    readMapFromFile("map.txt");

    initPlayer();
    initKeys();


    mainLoop();
}
