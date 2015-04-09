// Chapter5 ex1
// Author: lzr
// Date: 2015-04-09

#include <iostream>
int main() {
    using namespace std;
    int num1, num2;
    cout << "Enter one integer: ";
    cin >> num1;
    cout << "Enter another integer: ";
    cin >> num2;
    int count = 0;
    while (num1 <= num2)
    {
        count += num1;
        num1++;
    }
    cout << "result = " << count << endl;
    return 0;
}
