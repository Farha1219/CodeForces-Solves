#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    bool ok = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[s.length() - 1 - i]) {
            ok = false;
            break;
        }
    }

    if (ok) cout << "YES";
    else cout << "NO";

    return 0;
}
