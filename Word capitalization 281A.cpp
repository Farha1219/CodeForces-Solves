
#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;


    if(word[0] >= 'a' && word[0] <= 'z') {
        word[0] = word[0] - ('a' - 'A');  // convert to uppercase
    }

    cout << word << endl;
    return 0;
}
