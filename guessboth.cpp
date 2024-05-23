#include "hw10.h"

void guessBoth(struct card& deck)
{
  //collect user input
  std::string faceChoice;
  std::string suitChoice;

  std::cout << "Enter Your Choice for the face.\n";
  std::cin >> faceChoice;
  std::cout << "Enter Your Choice for the Suit.\n";
  std::cin >> suitChoice;

  //Correct input data
  std::string temp = fixFaceInput(faceChoice);
  faceChoice = temp;
  temp = fixSuitInput(suitChoice);
  suitChoice = temp;

    //TESTING PUROSE
    std::cout << "Printing out Choices " << suitChoice << " of " << faceChoice;

  //check if card faces match
  if(faceChoice == deck.face && suitChoice == deck.suit)
  {
    std::cout << "*******************************\n*You guessed the correct card!*\n";
    std::cout << "*******************************\n";
  }
  else if(faceChoice == deck.face)
  {
    std::cout << "You guessed only the face correctly.\n";
  }
  else if(suitChoice == deck.suit)
  {
    std::cout << "You guessed only the suit correctly.\n";
  }
  else
  {
    std::cout << "You guessed incorrectly.\n";
  }
}