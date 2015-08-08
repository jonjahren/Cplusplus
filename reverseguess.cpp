#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {

   srand(time(0)); // seed random number generator
   int theNumber;
   int comNumber;
   int tries = 0, guess;

   cout << "Welcome to the reverse guess my number game!\n\n";
   cout << "Please enter a number between 1 and 100: ";
   cin >> theNumber;

if(theNumber > 100)
	printf("That number is too high!\n");
	else {
   do {
      comNumber = rand() % 100 + 1; // Random number between 1 and 100
      ++tries;
	
        if(comNumber > theNumber);
	  cout << "Too high!\n";

        if(comNumber < theNumber)
	   cout << "Too low!\n";
       } while(comNumber != theNumber);
   cout << "It took the computer " << tries << " guesses to find your number!\n";
    return 0;   
     }
   return 1;
}
        
