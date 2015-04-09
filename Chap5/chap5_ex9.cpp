#include <iostream>
#include <string>
int main() {
    using namespace std;
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int dots;
    for (int r = 1; r <= rows; r++) {
        dots = rows - r;
        for (int d = 1; d <= dots; d++)
            cout << ".";
        for (int s = 1; s <= r; s++)
            cout << "*";
        cout << endl;
    }
    return 0;
}

