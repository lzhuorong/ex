// Chapter4 ex4 - string
// Author: lzr
// Date: 2015-04-09

#include <iostream>
#include <string>
int main() {
    using namespace std;
    string name, lname;

    cout << "Enter your first name: ";
    getline(cin, name);
    cout << "Enter your last name: ";
    getline(cin, lname);
    name = name + ", " + lname;
    cout << "Here's the information in a single string: " << name;

    return 0;
}
