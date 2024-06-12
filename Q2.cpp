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

        while (c) {
            cin >> score;
            if (stoi(score) < 0) cout << "grade must be positive number\n";
            else break; }

        if (score == "exit") break;

        if (stoi(score) >= 90) cout << "grade A\n\n";
        else    det_G(score);

    }

    return 0;
}

void det_G (string score) {

    if (stoi(score) < 90 && stoi(score) >= 80 ) cout << "grade is B\n\n";
    else if (stoi(score) < 80 && stoi(score) >= 70 ) cout << "grade is c\n\n";
    else if (stoi(score) < 70 && stoi(score) >= 60 ) cout << "grade is d\n\n";
    else cout << "you  failed\n\n";
}