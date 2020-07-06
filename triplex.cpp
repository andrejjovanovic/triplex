#include<iostream>

void PrintIntroduction(int LevelDifficulty) {
    // Print welcome message
    std::cout << "Entering the door with security level " << LevelDifficulty;
    std::cout << "\nEnter the secret combination code to continue to next door...\n\n";
}

bool PlayGame(int LevelDifficulty) {
     
    PrintIntroduction(LevelDifficulty);

    // Declare 3 number code
    const int CodeA = rand() % LevelDifficulty + LevelDifficulty;
    const int CodeB = rand() % LevelDifficulty + LevelDifficulty;
    const int CodeC = rand() % LevelDifficulty + LevelDifficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << "\n\n";

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player code is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\n\nWin\n";
        return true;
    }
    else {
        std::cout << "\n\nMore luck next time\n";
        return false;
    }
}

// Main function
int main() {

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

        std::cout << R"(


▄▄▄█████▓ ██▀███   ██▓ ██▓███   ██▓    ▓█████    ▒██   ██▒
▓  ██▒ ▓▒▓██ ▒ ██▒▓██▒▓██░  ██▒▓██▒    ▓█   ▀    ▒▒ █ █ ▒░
▒ ▓██░ ▒░▓██ ░▄█ ▒▒██▒▓██░ ██▓▒▒██░    ▒███      ░░  █   ░
░ ▓██▓ ░ ▒██▀▀█▄  ░██░▒██▄█▓▒ ▒▒██░    ▒▓█  ▄     ░ █ █ ▒ 
  ▒██▒ ░ ░██▓ ▒██▒░██░▒██▒ ░  ░░██████▒░▒████▒   ▒██▒ ▒██▒
  ▒ ░░   ░ ▒▓ ░▒▓░░▓  ▒▓▒░ ░  ░░ ▒░▓  ░░░ ▒░ ░   ▒▒ ░ ░▓ ░
    ░      ░▒ ░ ▒░ ▒ ░░▒ ░     ░ ░ ▒  ░ ░ ░  ░   ░░   ░▒ ░
  ░        ░░   ░  ▒ ░░░         ░ ░      ░       ░    ░  
            ░      ░               ░  ░   ░  ░    ░    ░      
)" << '\n';

    while(LevelDifficulty <= MaxDifficulty){
        // Initialize level complete bool and start the game
        bool bLevelComplete = PlayGame(LevelDifficulty);

        // Clean out the user input buffers
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete) {
            // Increase level difficulty
            ++LevelDifficulty;
        }
    }

    std::cout << "You are out on the fresh air. Congratulations!" << std::endl;
    
    return 0;
}