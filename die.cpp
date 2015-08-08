#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0)); // Seed random number generator based on current time

    int randomNumber = rand(); // Generate random number 
    int die = (randomNumber % 6) + 1; // get a random number between 1 and 6
    cout << "You rolled a " << die << endl;
    return 0;
}
