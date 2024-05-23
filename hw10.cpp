#include "hw10.h"

int main ()
{
  //arrays holding card face and numbers
  std::string face[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
  std::string suit[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

  std::vector<card> deck;

  //initialize deck of cards. could be a func
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 13; j++)
    {
      card cards;

      cards.face = face[i];
      cards.suit = suit[j];
      // std::cout << face[i] << ", " << suit[j] << "\n";
      deck.push_back(cards);
    }
  }

  int choice;
  bool flag = false;

  while(!flag)
  {
    //random gen number & shuffle deck. Thank you Google.
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(deck.begin(), deck.end(), g);

    //choose a random card.
    std::random_shuffle(deck.begin(),deck.end());
    int randomIndex = rand() % 52;
    card& randomCard = deck[randomIndex];

    //print out menu
    std::cout << "Want to play?\n1. Guess the face\n2. Guess the suit\n3. Guess both\n4. End Game\n";
    //user input.
    std::cin >> choice;

    //Data Validation for Menu Choice
    if(choice > 4 || choice < 1)
    {
      std::cout << "invalid Choice";
    }

    //push to functions and print put results from Function
    switch (choice)
    {
      case 1:
        guessFace(randomCard);
        break;
      case 2:
        guessSuit(randomCard);
        break;
      case 3:
        guessBoth(randomCard);
        break;
      case 4:
        std::cout << "Goodbye." << std::endl;
        flag = true;
        break;
    }
    choice = 0;
    std::cout << "The card that was chosen was the " << randomCard.suit << " of " << randomCard.face << ".\n";
  }
  return 0;
}