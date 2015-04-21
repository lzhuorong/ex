#include <iostream>
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_box(box b);
void update_box(box * pb);
using namespace std;

int main() {
    box b = {"mb", 1.2, 5, 20.5, 3};      // 这里char是双引号，我第一次写成单引号的难怪输出都不对
    show_box(b);
    update_box(&b);
    show_box(b);
    return 0;
}

void show_box(box b) {
    cout << "Show box: ";
    cout << b.maker << " " << b.height << " "
    << b.width << " " << b.length << " " << b.volume << endl;
}

void update_box(box * pb) {
    pb->volume = pb->height * pb->length * pb->width;
    cout << "Update box volume!" << endl;
}
