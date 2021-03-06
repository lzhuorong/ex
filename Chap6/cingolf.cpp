// non-numeric input skipped
#include <iostream>
const int Max = 5;
int main() {
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++) {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i])) { // 格式不匹配时cin会返回false
            cin.clear();            // reset input
            while (cin.get() != '\n')
                continue;
            cout << "Please enter a number: ";
        }
    }
    // calculate average
    double total = 0.0;
    for (i = 0; i  < Max; i++)
        total += golf[i];
    // report results
    cout << total / Max << " = average score "
         << Max << " rounds\n";
    return 0;
}
