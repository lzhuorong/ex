// Chapter4 ex5 - struct
// Author: lzr
// Date: 2015-04-09

#include <iostream>
#include <string>
struct CandyBar {
    char brand[20];
    float weight;
    int calorie;
};

int main() {
    using namespace std;
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "snack: " << endl;
    cout << "Brand = " << snack.brand << endl;
    cout << "Weight = " << snack.weight << endl;
    cout << "Calorie = " << snack.calorie << endl;

    return 0;
}

