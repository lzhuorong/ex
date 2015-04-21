// factorial
#include <iostream>
long fact(int n); // ֻ����16! �ٴ������ˡ���
int main() {
    using namespace std;
    int n;
    cout << "Enter an positive integer: ";
    while (cin >> n) {
        long result = fact(n);
        cout << n << "! = " << result << endl;
        cout << "Enter an positive integer: ";
    }
    return 0;
}

long fact(int n) {
    if (n > 1)
        return n * fact(n-1);
    return 1;
}
