#include<iostream>
using namespace std;
int main()
{
    int n, response;
    cin>> n;
    for(int i=0; i<n; i++)
    {
        cin>> response;
        if(response==1)
        {
            cout<< "HARD";
            return 0;
        }
    }
    cout<< "EASY";
}
