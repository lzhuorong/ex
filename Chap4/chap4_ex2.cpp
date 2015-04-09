// Chapter4 ex2
// Author: lzr
// Date: 2015-04-09

#include <iostream>
#include <string>
int main() {
    using namespace std;
    string name, dessert;

    cout << "Enter your name: \n";
    getline(cin, name);
    cout << "Enter your favorite dessert: \n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
