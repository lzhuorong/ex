#include <iostream>
#include <cstring>
#include <string>

struct fish {
    char kind[20];
    int weight;
    float lenghth;
};

int main() {
    using namespace std;
    cout << (int *) "Home of the jolly bytes" << endl;  // output the address of string
    fish * f1 = new fish;
    cin >> f1->kind;
    cout << "The kind of fish is: " << f1->kind << endl;
    delete f1;

    return 0;
}
