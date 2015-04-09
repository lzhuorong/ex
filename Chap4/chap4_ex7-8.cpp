// Chapter4 ex7-8
// Author: lzr
// Date: 2015-04-09

#include <iostream>
#include <string>
using namespace std;
struct Pizza {
    string Company;
    float Dia;
    float Weight;
};

int main() {
    Pizza* p = new Pizza;
    cout << "Enter Pizza Company: ";
    getline(cin, p->Company);
    cout << "Enter Pizza Dia: ";
    cin >> p->Dia;
    cout << "Enter Pizza Weight: ";
    cin >> p->Weight;
    cout << "Pizza Information: " << endl;
    cout << p->Company << endl;
    cout << p->Dia << endl;
    cout << p->Weight << endl;
    delete p;
    return 0;
}
