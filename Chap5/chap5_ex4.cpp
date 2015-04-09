// Chapter5 ex4
// Author: lzr
// Date: 2015-04-09

#include <iostream>
int main() {
    using namespace std;
    const int MONTH = 12;
    const char * months[MONTH] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
    "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sales[MONTH];
    int sum = 0;

    for (int m=0; m < MONTH; m++)
    {
        cout << "Sales for " << months[m] << ": ";
        cin >> sales[m];
        sum += sales[m];
    }
    cout << "Total sales: " << sum << endl;
    return 0;
}
