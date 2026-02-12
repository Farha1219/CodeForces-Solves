
#include <iostream>
using namespace std;
int main()
{
    int a, b, year=0;
    cin>> a >>b;

    for(int i=0;i<10000; i++)
    {
        if(a>b)
        {
            cout<<year;
            break;
        }
        else
        {
            a=a*3;
            b=b*2;
            year++;
        }
    }
}
