#include <iostream>
#include <string>
int main() {
    using namespace std;
    int count = 0;
    string word;
    cout << "Enter words (to stop, type the word done):" << endl;
    while (cin>>word && word!="done")
        count ++;
    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}
