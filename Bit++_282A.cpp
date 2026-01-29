#include<iostream>
using namespace std;

int main()
{
    int n, x=0;
    cin>> n;
    char st[4];
    for(int i=0; i<n; i++)
    {
        cin>> st;
        if(st[1]== '+')
        {
            x++;
        }
        else{x--;}
    }

    cout<< x;
}
