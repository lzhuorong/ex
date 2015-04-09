// 5.9 reversing an array
#include <iostream>
#include <cstring>
int main() {
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    char temp;
    int i, j;
    for (j = 0, i = word.size()-1; j < i; --i, ++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << endl;

    int k, l;
    cout << (k = 20, l = 2*k) << endl;  // 逗号表达式的值时第二部分的值
    return 0;
}
