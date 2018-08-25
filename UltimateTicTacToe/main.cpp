#include <iostream>
#include <string>

using namespace std;

int main() {

	string input;

	cout << "Welcome to Ultimate Tic Tac Toe!" << endl;

	cout << "Select your options (update, settings): ";
	cin >> input;

	if (input == "update") {
		cout << "Updating game settings....";
	}
	else if (input == "setting") {
		cout << "Setting up game....";
	}

	cout << endl << "You lost!";

}