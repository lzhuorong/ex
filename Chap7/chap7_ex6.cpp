#include <iostream>
int Fill_array(double * arr, int ArSize);
void Show_array(double * arr, int ArSize);
void Reverse_array(double * arr, int ArSize);

const int ArSize = 10;
using namespace std;

int main() {
    cin.clear();
    double arr[ArSize];
    int len = Fill_array(arr, ArSize);
    Show_array(arr, len);
    Reverse_array(arr, len);
    Show_array(arr, len);
    Reverse_array(arr+1, len-2);    // 这里len得减2才行（去头去尾少了2个元素，我一开始想成arr+1是去头，len-1是去尾了）
    Show_array(arr, len);
    return 0;
}

int Fill_array(double * arr, int ArSize) {
    cout << "Please enter 10 double numbers at most: ";
    double a;
    int i = 0;
    while (cin >> a && i < 10) {
        arr[i] = a;
        i++;
    }
    cin.clear();
    cout << "You entered " << i << " number(s)." << endl;
    return i;
}

void Show_array(double * arr, int ArSize) {
    cout << "Show array: ";
    for (int i = 0; i < ArSize; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double * arr, int ArSize) {
    int i = 0;
    int j = ArSize - 1;
    double temp;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;           // 第一次居然忘记写这个了……… 难怪一直卡住，死循环了
    }
    cout << "Reverse array!" << endl;
}
