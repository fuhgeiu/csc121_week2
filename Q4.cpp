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

    int tlscore = score;
        switch (tlscore) {

            case 9:
                cout << " letter grade is : A";
                break;









        }


}