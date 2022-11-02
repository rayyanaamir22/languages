#include <iostream>

void secretNumGame() {
    int secretNum = 407;
    int guess;
    int numTries = 1;
    while(true){
        std::cout << "Guess a number: ";
        std::cin >> guess;
        if(guess==secretNum){
            std::cout << "That's correct! The secret number was " << guess << "!\n";
        }else if(guess<secretNum){
            std::cout << "Guess higher.\n";
        }else{
            std::cout << "Guess lower.\n";
        }
        numTries++;
    }
}

int main() {
    // WHILE LOOPS----------------------------------
    int i = 0;
    while(i<10){
        std::cout << i << '\n';
        i++;
    }

    // Do-while loop 
    i = 14; // Since the loop gives instructions before the condition,
    // it will run once without checking the condition.
    do{
        std::cout << i << '\n';
        i++;
    }while(i<10);
    
    //secretNumGame();

    // FOR LOOPS---------------------------------
    for(int j=0; j<10; j++){
        std::cout << j << '\n';
    }

    int theGrid[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout << theGrid[i][j] << std::endl;
        }
    }

    return 0;
}