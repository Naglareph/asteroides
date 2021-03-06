#pragma once

#include <vector>
#include "SFML/Graphics.hpp"

#include "game_state.hpp"

class GameState;

class Game
{
public:
    //constructor and deconstructor
    Game();
    ~Game();

    //functions for changing game state
    void pushState(GameState* state);
    void popState();

    //function to get the current State (note this function must be a pointer)
    GameState* CurrentState();

    //game loop function
    void gameLoop();
   
    //sfml window
    sf::RenderWindow window;
    
private:
    std::vector<GameState*> states;

};
