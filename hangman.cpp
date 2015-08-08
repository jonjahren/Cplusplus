#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main() {
 
      // Setup
	const int MAX_WRONG = 8; // Maximum allowed guesses

	vector<string> words; // Collection of possible words to guess
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	words.push_back("VANSKELIG");
	words.push_back("DAMN");
	words.push_back("RANDOM");

	srand(time(0));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD =  words[0]; // word to guess
	int wrong = 0; // Number of incorrect guesses
	string soFar(THE_WORD.size(), '-'); // The word guessed so far
	string used = ""; // Letters already guessed

	cout << "Welcome to hangman. Good luck!\n";

	// Main loop for game
	while((wrong < MAX_WRONG) && (soFar != THE_WORD)) {
	  cout << "\n\nYou have " << (MAX_WRONG - wrong) << " incorrect guesses left.\n";
	  cout << "\nYou have used the following letters:\n" << used << endl;
	  cout << "\nSo far, the word is:\n" << soFar << endl;

	char guess;
	cout << "\n\nEnter your guess: ";
	cin >> guess;
	guess = toupper(guess); // Make uppercase since secret word is in uppercase
	while(used.find(guess) != string::npos) {
	  cout << "\nYou've already guessed " << guess << endl;
	  cout << "Enter your guess: ";
	  cin >> guess;
	  guess = toupper(guess);
	 }

	used += guess;

	if(THE_WORD.find(guess) != string::npos) {
	cout << "That's right! " << guess << " is in the word.\n";

	    // Update soFar with the newly guessed letter
	   for(int i = 0; i < THE_WORD.length(); ++i)
		if(THE_WORD[i] == guess)
		 soFar[i] = guess;
	    }
	else {
	  cout << "Sorry, " << guess << " isn't in the word.\n";
	  ++wrong;
	  }
        }
	// Shut down
	if(wrong == MAX_WRONG)
	  cout << "\nYou've been hanged!";
	else
	  cout << "\nYou guessed it!";
	cout << "The word was " << THE_WORD << endl;
	return 0;
}
