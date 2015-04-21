// using pointer
#include <iostream>
#include <cmath>
double calculate(double x, double y, double (*pt)(double, double)); // ����ʹ�ú���ָ���ʱ��ҲӦ���в�������������
double add(double x, double y);
double sub(double x, double y);
using namespace std;

int main() {
    double x, y;
    double (*pt[2])(double, double) = {add, sub};
    cout << "Please enter two number: ";
    while (cin >> x >> y) {
        double p = calculate(x, y, pt[0]);
        double q = calculate(x, y, pt[1]);
        cout << "add = " << p << ", sub = " << q << endl;
        cout << endl << "Please enter two number: ";
    }
    return 0;
}

double calculate(double x, double y, double (*pt)(double, double)) {
    return (*pt)(x, y);
}

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return abs(x - y);
}
