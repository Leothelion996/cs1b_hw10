/**********************************************************
 * Leonardo Herrera * CS1B TTH 7:30 - 9:40 * Assignment 6 *
 * hw10 * Due : Tuesday , March 25th, 2024                *
 *********************************************************/

#ifndef _H_
#define _H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>


struct card;

struct card
{
    std::string face;
    std::string suit;


    friend std::ostream& operator<<(std::ostream& outstrm, const card& chosenCard) 
    { 
        outstrm << chosenCard.suit << " of " << chosenCard.face; 
        return outstrm; 
    }
};

void guessFace(struct card& deck);
std::string fixFaceInput(std::string choice);



#endif