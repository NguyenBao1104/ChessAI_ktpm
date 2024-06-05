#include"GameManager.hpp"

int main()
{
    //FreeConsole();
    RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Chess ktpm", sf::Style::Close);
    GameManager gm(window);
    gm.Play();

}

