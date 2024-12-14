#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2;
    cout << a << " " << b << " ";
    while (true) {
        int next = a + b;
        if (next > 4000000) break;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}
