#include <iostream>
using namespace std;
const int ArSize = 10;
int inputScore(int * score, int ArSize);
void showScore(int * score, int len);
double avgScore(int * score, int len);

int main() {
    int score[ArSize];
    cout << "Enter 10 scores at most (q to quit): ";
    int len = inputScore(score, ArSize);
    showScore(score, len);
    double avg = avgScore(score, len);
    cout << "avg = " << avg << endl;

    return 0;
}

int inputScore(int * score, int ArSize) {
    int i = 0;
    while (cin >> score[i] && i < ArSize) {
        i ++ ;
    }
    cin.clear();
    return i;
}

void showScore(int * score, int len) {
    cout << "You entered: ";
    for (int i = 0; i < len; i++)
        cout << score[i] << " ";
    cout << endl;
}

double avgScore(int * score, int len) {
    double sum = 0;
    for (int i = 0; i < len; i++)
        sum += score[i];
    return sum / len;
}
