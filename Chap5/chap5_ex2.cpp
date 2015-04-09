// Chapter5 ex2
// Author: lzr
// Date: 2015-04-09

#include <iostream>
int main() {
    using namespace std;
    int num;
    int count = 0;
    cout << "Enter one integer: ";
    cin >> num;
    while (num)
    {
        count += num;
        cout << "Now, sum = " << count << endl;
        cout << "continue: ";
        cin >> num;
    }

    return 0;
}
