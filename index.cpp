#include <iostream>

void PlayGameAtDifficulty(int difficulty)
{
    
}

int main()
{
    int difficulty = 2;
    int maxDifficulty = 10;
    while(difficulty <= maxDifficulty)
    {
        PlayGameAtDifficulty(difficulty);
        std::cin.clear(); //clears the failbit
        std::cin.ignore(); //discards the buffer
        ++difficulty;
    }

    std::cout << "wow - your a master hacker!\n";
    return 0; // exit with no error code
}