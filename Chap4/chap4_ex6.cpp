// Chapter4 ex6 - struct array
// Author: lzr
// Date: 2015-04-09

#include <iostream>
#include <cstring>
struct CandyBar {
    char brand[20];
    float weight;
    int calorie;
};

int main() {
    using namespace std;
    CandyBar cb[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Green", 2.3, 100},
        {"Red", 1.5, 150}
    };
    cout << "CandyBar: " << endl;
    cout << "1: " << cb[0].brand << ", " << cb[0].weight << ", " << cb[0].calorie << endl;
    cout << "2: " << cb[1].brand << ", " << cb[1].weight << ", " << cb[1].calorie << endl;
    cout << "3: " << cb[2].brand << ", " << cb[2].weight << ", " << cb[2].calorie << endl;

    return 0;
}

