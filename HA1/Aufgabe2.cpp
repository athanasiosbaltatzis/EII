#include <iostream>

unsigned int upperLimit;
unsigned int lowerLimit;

void startGame(unsigned int lower, unsigned int upper)
{
    upperLimit = upper;
    lowerLimit = lower;
}

int getCurrentGuess()
{
    if (upperLimit == lowerLimit) {
        return -upperLimit;
    }

    return lowerLimit + (upperLimit - lowerLimit) / 2;
}

void answer(bool answer)
{
    // Number is smaller (left half)
    if (answer) {
        if (upperLimit - lowerLimit == 1){
            upperLimit = lowerLimit;
        }
        else{
            upperLimit = lowerLimit + (upperLimit - lowerLimit) / 2;
        }
        std::cout << "The new limits: " << lowerLimit << " - " << upperLimit;
    }
    // Number is bigger (right half)
    else {
        if (upperLimit - lowerLimit == 1){
            lowerLimit = upperLimit;
        }
        else{
            lowerLimit += 1 + (upperLimit - lowerLimit) / 2;
        }
        std::cout << "The new limits: " << lowerLimit << " - " << upperLimit;
    }
}

int main()
{
    std::cout << "Hier eure Namen und Matrikelnummern!\n";
    startGame(1, 100);
    while (true)
    {
        int guess = getCurrentGuess();
        if (guess > 0)
        {
            std::cout << "Is your number smaller or equal to " << guess << "? y/n\n";
        }
        else if (guess < 0)
        {
            std::cout << "Your number is " << -1 * guess << "!\n";
            break;
        }
        char input;
        do
        {
            input = std::cin.get();
            if (input == 'y')
            {
                answer(true);
            }
            else if (input == 'n')
            {
                answer(false);
            }
            std::cin.ignore(1000, '\n');
        } while (input != 'n' && input != 'y');
    }
    system("pause");
    return 0;
}
