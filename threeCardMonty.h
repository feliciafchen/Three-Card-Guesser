//
// Created by felic on 7/19/2022.
//

#ifndef THREECARDMONTY_THREECARDMONTY_H
#define THREECARDMONTY_THREECARDMONTY_H

void playThreeCardMonty();
void randomCards(int& a, int& b, int& c);
void swapping(int& a, int& b, int& c);
void guessValues(int& a, int& b, int& c, int& guessA, int& guessB, int& guessC);
void guess(char cardLetter, int& card, int& guessCard);
void correct(int& a, int& b, int& c, int& guessA, int& guessB, int& guessC);
void swap2cards(char cardA, char cardB, int& card1, int& card2);
void randomKey();

#endif //THREECARDMONTY_THREECARDMONTY_H
