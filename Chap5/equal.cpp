// 5.10 equality vs assignment
#include <iostream>
int main() {
    using namespace std;
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Doing it right: \n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout << "quiz" << i << " is a 20\n";    // 循环到数组元素不为20时退出

    cout << "Doing it dangerously wrong: \n";
    for (i = 0; quizscores[i] = 20; i++)    // 将数组中每个元素都赋值为20，一直运行到超出数组还会继续
        cout << "quiz" << i << " is a 20\n";

    return 0;
}
