#include <iostream>
#include <random> 
#include <ctime> 
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd()); 
    uniform_int_distribution<> dis(1, 100); 
    int randomNumber = dis(gen); 

    int guess;
    int attempts = 0;
    const int maxAttempts = 5;

    cout << "Welcome to the Casino Number Guessing Game!" <<endl;
    cout << "I have selected a number between 1 and 100. You have 5 attempts to guess it." <<endl;

    while (attempts < maxAttempts) {
        cout << "Attempt " << (attempts + 1) << ": Enter your guess: ";
        cin >> guess;

        if (guess == randomNumber) {
            cout << "Well done!!! You did it!" << std::endl;
            return 0;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." <<endl;
        } else {
            cout << "Too high! Try again." <<endl;
        }

        attempts++;
    }

    cout << "Oops!! Try again, you failed to guess." <<endl;
    cout << "The correct number was: " << randomNumber <<endl;

    return 0;
}
