// Chapter5 ex3
// Author: lzr
// Date: 2015-04-09

#include <iostream>
#define CAPITAL 100
int main() {
    using namespace std;
    float profitD, profitC;
    int year = 0;
    float sumD = CAPITAL, sumC = CAPITAL;
    cout << sumD;
    while (sumC <= sumD)
    {
        sumC += 0.05 * sumC;
        sumD += 0.1 * CAPITAL;
        year++;
        cout << year << " year, " << sumD - sumC << endl;
    }
    cout << "After " << year << " years, sumC = " << sumC << ", sumD = " << sumD << endl;
    return 0;
}
