
#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    for (char c : n) {
        if (c == '4' || c == '7') {
            count++;
        }
    }

    string cnt = to_string(count);
    bool isLucky = true;

    for (char c : cnt) {
        if (c != '4' && c != '7') {
            isLucky = false;
            break;
        }
    }

    if (count > 0 && isLucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
