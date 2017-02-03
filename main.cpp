#include <iostream>
#include "game.hpp"

int main()
{
  Game myGame;
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;
  bool turnOver = false;

  std::cout << "Welcome to the game!" << std::endl;

  while(gameOver == false)
  {
    myGame.printBoard();
    if(turn == 0)
    {
      std::cout << "It is Player One's Turn!" << std::endl;
    }
    else
    {
      std::cout << "It is Player Two's Turn!" << std::endl;
    }

    while(turnOver == false)
    {
      //do the turn
      std::cout << "Pick a Row: ";
      std::cin >> rowIn;
      std::cout << "Pick a Collumn: ";
      std::cin >> colIn;

      turnOver = myGame.makeMove(turn, rowIn, colIn);
    }
    turnOver = false;

    turn++;
    turn %= 2;
  }
}
