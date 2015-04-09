// Chapter4 ex3
// Author: lzr
// Date: 2015-04-09

#include <iostream>
#include <cstring>
const int SIZE = 20;
int main() {
    using namespace std;
    char fname[SIZE], lname[SIZE];
    char name[2*SIZE+2];

    cout << "Enter your first name: ";
    cin.getline(fname, SIZE);
    cout << "Enter your last name: ";
    cin.getline(lname, SIZE);
    strcpy(name, fname);
    strcat(name, ", ");
    strcat(name, lname);
    cout << "Here's the information in a single string: " << name;

    return 0;
}
