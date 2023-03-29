//
// Created by felic on 7/19/2022.
//
#include <cstdlib>
#include <iostream>

void randomKey()
{
    char key;
    std::cout << "Enter any key to continue.\n";
    std::cin >> key;
    std::cout << "\n";
}
void randomCards(int& a, int& b, int& c)
{
    do
    {
        a = rand() % 10;
        b = rand() % 10;
        c = rand() % 10;
    }
    while (a == b || b == c || c == a);

    std::cout << "Please memorize the following cards: \n"
                 "a: " << a << "\nb: " << b << "\nc: " << c << std::endl;
    randomKey();
}

void swap2cards(char cardA, char cardB, int& card1, int& card2)
{
    int temp;
    temp = card1;
    card1 = card2;
    card2 = temp;
    std::cout << "swapping " << cardA << " and " << cardB << "...\n";
}

void swapping(int& a, int& b, int& c)
{
    int numSwap;
    numSwap = rand() % 6 + 5;

    for (int i = 0; i < numSwap; i++)
    {
        int swap, temp;
        swap = rand() % 3;

        if (swap == 0)
        {
            swap2cards('a', 'b', a, b);
        }
        else if (swap == 1)
        {
            swap2cards('b', 'c', b, c);
        }
        else if (swap == 2)
        {
            swap2cards('a', 'c', a, c);
        }
    }
    std::cout << "\n";
}
void guessValues(int& a, int& b, int& c, int& guessA, int& guessB, int& guessC)
{
    std::cout << "What is the value for a?\n";
    std::cin >> guessA;

    std::cout << "What is the value for b?\n";
    std::cin >> guessB;

    std::cout << "What is the value for c?\n";
    std::cin >> guessC;
}

void guess(char cardLetter, int& card, int& guessCard)
{
    if (card == guessCard)
    {
        std::cout << "You guessed card " << cardLetter << " correctly!\n";
    }
    else if (card != guessCard)
    {
        std::cout << "You guessed card " << cardLetter << " incorrectly! The answer was " << card << ".\n";
    }
}

void correct(int& a, int& b, int& c, int& guessA, int& guessB, int& guessC)
{
    guess('a', a, guessA);
    guess('b', b, guessB);
    guess('c', c, guessC);

    std::cout << "\n";
}
void playThreeCardMonty()
{
    srand(time(0));
    char restart;

    do
    {
        int a, b, c;
        int guessA, guessB, guessC;
        randomCards(a, b, c);
        swapping(a, b, c);
        guessValues(a, b, c, guessA, guessB, guessC);
        correct(a, b, c, guessA, guessB, guessC);

        std::cout << "Would you like to restart? (y/n)\n";
        std::cin >> restart;
    }
    while (tolower(restart) == 'y');
}

