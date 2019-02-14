#include <iostream>
using namespace std;

void printTitle(int n){
	cout << "You have guessed " << n << " number of times." << endl;
	cout << "Guess a number between 1 and 1000: ";
}

bool guess(int num, int cnt){
	int guess = 0;
	
	printTitle(cnt);
	cin >> guess;
	
	if (guess > num){
		cout << "You guessed too high..." << endl;
		return true;
	} else if (guess < num){
		cout << "You guessed too low..." << endl;
		return true;
	} else {
		cout << "You guessed right!!"<< endl;
		return false;
	}
}

int main (){
	bool failed = true;
	int count = 0;
	int number = 73;
	
	while(failed){
		failed = guess(number, count);
		count++;
	}
	
	cout << "It took you " << count << " time to get it right!" << endl;
return 0;
}
