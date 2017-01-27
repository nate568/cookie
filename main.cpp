#include <iostream>
void printBoard(char board[2][2] ){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      std::cout << board[i][j];
    }
  }
  }
int main(){
  int turn=0;
  bool gameOver = false;
  int rowIn;
  int colIn;
  char board [2][2];

  std::cout<< "Welcome to the game!"<< std::endl;
  while(gameOver==false){
  printBoard(board);
  if(turn == 0){
    std::cout <<"Player 1 turn"<< std::endl;
  }
  else{
    std::cout<<"Player 2 turn" << std::endl;
  }
  //do the turn
  std::cout << "Pick a row: ";
  std::cin >> rowIn;
  std::cout << "Pick a Collumn: ";
  std::cin>> colIn;

if(turn == 0)
  {
    board[rowIn][colIn] = 'X';
  }
  else
  {
  board[rowIn][colIn] = 'O';
  }
  turn++;
  turn%=2;
  }

  }
