#include <iostream>
using namespace std;

int main() {
	cout << "Didfficulty levels:\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch(choice) {
	case 1:
	     cout << "You picked easy. \n";
	     break;
	case 2:
	    cout << "You picked normal. \n";
	    break;
	case 3:
	    cout << "You picked hard. \n";
	    break;
	default:
	  cout << "You made an illegal choice. \n";
        }
	return 0;
}
