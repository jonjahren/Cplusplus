#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
     srand(time(0)); // seed random number generator

      int theNumber = rand() % 100 + 1; // random number between 1 and 100
      int tries = 0, guess;

       cout << "Welcome to guess my number\n\n";

	do {
         
           cout << "Enter a guess: ";
	   cin >> guess;
            ++tries;
           if(guess > theNumber)
	      cout << "Too high!\n\n";
           if(guess < theNumber)
	     cout << "Too low!\n\n";
     } while (guess != theNumber);

    cout << "That's it! You got it in " << tries << " guesses!\n";
    return 0;
}
