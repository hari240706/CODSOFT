#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guess() {
	srand(time(0)); // To initialize random seed
	int t = rand() % 100 + 1; // To generate random number between 1 and 100
	int g , a = 0;

	cout << "Welcome to the Number Guessing Game!" << endl;
	cout << "I have chosen a number between 1 and 100. Guess it?" << endl;

	do {
		cout << "Enter your guess: ";
		cin >> g;
		a++;

		if (g > t){
			cout << "It's Too high! Please Try again." << endl; // Executes if guess is high
		} else if (g < t) {
			cout << "It's Too low! Please Try again." << endl; // Executes if guess is low
		}
	} while (g != t);

	cout << "Congratulations! You guessed the number in " << a << " attempts." << endl; //displays how many attempts it takes to find
}

int main() {
	guess(); //calling a function
	return 0;
}