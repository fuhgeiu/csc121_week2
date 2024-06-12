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

        det_G(score);

    }

    return 0;
}

void det_G (string score) {

    int tlscore = (stoi(score)/10);
    switch (tlscore) {

        case 9:
            cout << " letter grade is : A\n\n";
            break;

        case 8:
            cout << " letter grade is : B\n\n";
            break;

        case 7:
            cout << " letter grade is : C\n\n";
            break;

        case 6:
            cout << " letter grade is : D\n\n";
            break;

        case 5:
            cout << " you have failed\n\n";
            break;

        case 4:
            cout << " you have failed\n\n";
            break;

        case 3:
            cout << " you have failed\n\n";
            break;

        case 2:
            cout << " you have failed\n\n";
            break;

        case 1:
            cout << " you have failed\n\n";
            break;

        case 0:
            cout << " you have failed\n\n";
            break;

        default: cout << " error";


    }


}