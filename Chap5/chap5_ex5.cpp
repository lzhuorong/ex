// Chapter5 ex5
// Author: lzr
// Date: 2015-04-09

#include <iostream>
int main() {
    using namespace std;
    const int MONTH = 12;
    const int YEAR = 3;
    const char * months[MONTH] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
    "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sales[YEAR][MONTH];
    int sum[YEAR] = {0};

    for (int y=0; y < YEAR; y++)
    {
        cout << "Year = " << y << endl;
        for (int m=0; m < MONTH; m++)
        {
            cout << "Sales for " << months[m] << ": ";
            cin >> sales[y][m];
            sum[y] += sales[y][m];
        }
    }

    int total = 0;
    for (int y=0; y < YEAR; y++)
    {
        cout << "Year = " << y << ", Sales = " << sum[y] << endl;
        total += sum[y];
    }
    cout << "Total Sales = " << total << endl;

    return 0;
}
