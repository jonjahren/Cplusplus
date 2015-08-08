#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  int deduct;
  enum fields {WORD, HINT, NUM_FIELDS};
  const int NUM_WORDS = 5;
  const string WORDS[NUM_WORDS][NUM_FIELDS] = {
    {"Wall", "Do you feel you're banging your head against something?"},
    {"Glasses", "These might help you see the answer."},
    {"Labored", "Going slowly, is it?"},
    {"Persistent", "Keep at it."},
    {"Jumble", "It's what the game is about."}
   };
   
  srand(time(0));
  int choice = (rand() % NUM_WORDS);

  string theWord = WORDS[choice][WORD]; // word to guess
  string theHint = WORDS[choice][HINT]; // The corresponding hint


  string jumble = theWord; // Jumbled version of the word
   int length = jumble.size();
   for(int i = 0; i < length; ++i) {
     int index1 = (rand() % length);
     int index2 = (rand() % length);
     char temp = jumble[index1];
     jumble[index1] = jumble[index2];
     jumble[index2] = temp;
     }


 cout << "\t\t\tWelcome to the Word Jumble!\n\n";
 cout << "Unscramble the letters to make a word.\n";
 cout << "Enter 'hint' for a hint.\n";
 cout << "Enter 'quit' to quit the game\n\n";
 cout << "The jumble is: " << jumble;

 string guess;
 cout << "\n\nEnter your guess: ";
 cin >> guess;

  while((guess != theWord) && (guess != "quit")) {
   if(guess == "hint")
     cout << theHint;     
    else
     cout << "Sorry, that's not it.";
   cout << "\n\nYour guess: ";
   cin >> guess;
   }

 
 int score = theWord.size() * 30;
 if(guess == theWord) 
   cout << "\nThat's it! You guessed it!\n";
   cout << "You scored: " << score << endl;

 cout << "\nThanks for playing!\n";
 return 0;
} 
