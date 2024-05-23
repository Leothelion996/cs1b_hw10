#include "hw10.h"

void guessFace(struct card& deck)
{
  //collect user input
  std::string choice;
  std::cout << "Enter Your Choice.\n";
  std::cin >> choice;

  //Correct input data
  std::string temp = fixFaceInput(choice);
  choice = temp;

  //check if card faces match
  if(choice == deck.face)
  {
    std::cout << "\n*******************************\n*You guessed the correct face!*\n";
    std::cout << "*******************************\n";
  }
  else
  {
    std::cout << "You guessed incorrectly.\n";
  }
}

std::string fixFaceInput(std::string choice)
{
  //sets the face to the correct input.
  if(choice == "Hearts" || choice == "hearts" || choice == "1")
  {
    choice = "Hearts";
  } 
  else if(choice == "Diamonds" || choice == "diamonds" || choice == "2")
  {
    choice = "Diamonds";
  }
  else if(choice == "Clubs" || choice == "clubs" || choice == "3")
  {
    choice = "Clubs";
  }
  else if(choice == "Spades" || choice == "spades" || choice == "4")
  {
    choice = "Spades";
  }
  else //Error handling
  {
    std::cout << "Please check your spelling or input and try again.\n";
    choice = "Face Input: ERROR";
  }

  return choice;
}