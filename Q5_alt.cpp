/*
program that does cmath and trig fucntions
alex carnes 6/6
*/

#include <iostream>

using namespace std;

void det_G(string);

int main() {

    string score;
    bool c = 1;

    while (c) {

        cout << "enter score\n\n";

        if (score == "exit") break;

        while (c) {
            cin >> score;
            if (stoi(score) < 0) cout << "grade must be positive number\n";
            else
            if (stoi(score) > 100) cout << "grade must be less than 100\n";
            else break;
        }

        det_G(score);

    }

    return 0;
}

void det_G (string score) {

    if (stoi(score) <= 50 ) cout << "you have failed\n";

//loop to acess grade

//  subtract 50 to get basline
//  divide int by 10 and truncate to get its group
    int group = ((stoi(score) - 50)/10);
    int i = 0;

//  subtract by 1

// keep count how many times it can subtract 1 til we get 0

// number of 1 subtracted will be equal to the letter grade

    while (group > 0) {

        (group - 1); i++;
    }



}