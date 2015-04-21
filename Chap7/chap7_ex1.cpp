#include <iostream>
using namespace std;
double avg(double x, double y);

int main() {
    double x, y;
    cout << "Enter two numbers: ";
    while (cin >> x && cin >> y) {
        double answer = avg(x, y);
        cout << "the average = " << answer << endl;
        cout << "Enter next two numbers: (q to quit)";
    }

    return 0;
}

double avg(double x, double y) {
    return 2.0 * x * y / (x + y);
}
