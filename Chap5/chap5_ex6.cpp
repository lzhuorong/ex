#include <iostream>
#include <string>
using namespace std;
struct car {
    string maker;
    int year;
};

int main() {
    int n;
    cout << "How many cars do you have? ";
    cin >> n;
    while (cin.get() != '\n')       // get rid of rest of line
        ;

    car * pc = new car[n];
    for (int i = 0; i < n; i++) {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, pc[i].maker);
        cout << "Please enter the year made: ";
        cin >> pc[i].year;
        while (cin.get() != '\n')       // get rid of rest of line
        ;
    }
    for (int i = 0; i < n; i++)
        cout << pc[i].year << " " << pc[i].maker << endl;
    delete [] pc;
    return 0;
}
