#include<iostream>
using namespace std;
#include<vector>
#include<string>

int main()
{
    int w, i;
    cin >> w;
    vector <string> words(w);
    for(i=0; i<w; i++)
    {
        cin >> words[i];
    }
    for(i=0; i<w; i++)
    {
        if(words[i].length() >10)
        {
            cout << words[i][0] << words[i].length()-2 << words[i][words[i].length() - 1] << endl;
        }
        else
        {
            cout << words[i] << endl;
        }
    }
}
