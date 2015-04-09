#include <iostream>
#include <cstring>
int main() {
    using namespace std;
    int count = 0;
    char word[20];
    cout << "Enter words (to stop, type the word done):" << endl;
    while (cin>>word && strcmp(word, "done"))
        count ++;
    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}
