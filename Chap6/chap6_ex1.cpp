// Chapter6 ex1
// Author: lzr
// Date: 2015-04-10

#include <iostream>
#include <cctype>
using namespace std;
int main() {

    char ch;
    cin.get(ch);
    while (ch!='@') {
        if (!isdigit(ch)) {
            if (islower(ch))
                ch = toupper(ch);
            else if (isupper(ch))
                ch = tolower(ch);
            cout << ch;
        }
        cin.get(ch);
    }
    return 0;
}

