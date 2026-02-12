#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    // full 5-step moves plus 1 if there is leftover
    int steps = x / 5 + (x % 5 != 0);

    cout << steps << endl;

    return 0;
}
