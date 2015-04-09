// reading chars with cin.get()
#include <iostream>
#define EOF -1
int main() {
    using namespace std;
    int ch;             // should be int, not char
    int count = 0;

    while ((ch = cin.get()) != EOF) // test for end-of-file, ctrl+z
    {
        cout.put (char (ch));
        ++ count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}
