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
    Reverse_array(arr+1, len-2);    // ����len�ü�2���У�ȥͷȥβ����2��Ԫ�أ���һ��ʼ���arr+1��ȥͷ��len-1��ȥβ�ˣ�
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
        i++; j--;           // ��һ�ξ�Ȼ����д����ˡ����� �ѹ�һֱ��ס����ѭ����
    }
    cout << "Reverse array!" << endl;
}
