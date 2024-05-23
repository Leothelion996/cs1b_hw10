#include "hw10.h"

// std::string fixSuitInput(std::string choice);

void guessSuit(struct card& deck)
{
  //collect user input
  std::string choice;
  std::cout << "Enter Your Choice.\n";
  std::cin >> choice;

  //Correct input data
  std::string temp = fixSuitInput(choice);
  choice = temp;

    //TESTING PUROSE
    std::cout << choice << " & " << deck.suit << "\n";

  //check if card faces match
  if(choice == deck.suit)
  {
    std::cout << "*******************************\n*You guessed the correct face!*\n";
    std::cout << "*******************************\n";
  }
  else
  {
    std::cout << "You guessed incorrectly.\n";
  }
}


std::string fixSuitInput(std::string choice)
{
  //sets the potential suit input to correct format
  if(choice == "Ace" || choice == "ace" || choice == "1" || choice == "One" || choice == "one")
  {
    choice = "Ace";
  } 
  else if((choice == "Two" || choice == "two" || choice == "2"))
  {
    choice = "Two";
  }
  else if((choice == "Three" || choice == "three" || choice == "3"))
  {
    choice = "Three";
  }
  else if((choice == "Four" || choice == "four" || choice == "4"))
  {
    choice = "Four";
  }
  else if((choice == "Five" || choice == "five" || choice == "5"))
  {
    choice = "Five";
  }
  else if((choice == "Six" || choice == "six" || choice == "6"))
  {
    choice = "Six";
  }
  else if((choice == "Seven" || choice == "seven" || choice == "7"))
  {
    choice = "Seven";
  }
  else if((choice == "Eight" || choice == "eight" || choice == "8"))
  {
    choice = "Eight";
  }
  else if((choice == "Nine" || choice == "nine" || choice == "9"))
  {
    choice = "Nine";
  }
  else if((choice == "Ten" || choice == "ten" || choice == "10"))
  {
    choice = "Ten";
  }
  else if((choice == "Jack" || choice == "jack" || choice == "11" || choice == "Eleven" || choice == "eleven"))
  {
    choice = "Jack";
  }
  else if((choice == "Queen" || choice == "queen" || choice == "12" || choice == "Twelve" || choice == "twelve"))
  {
    choice = "Queen";
  }
  else if((choice == "King" || choice == "king" || choice == "13" || choice == "Thirteen" || choice == "thirteen"))
  {
    choice = "King";
  }
  else //Error handling
  {
    std::cout << "Please check your spelling or input and try again.\n";
    choice = "Suit Input: ERROR";
  }

  return choice;
};