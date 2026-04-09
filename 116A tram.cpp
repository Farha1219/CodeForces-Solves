#include<iostream>
using namespace std;
int main()
{
    int n,j,k, r=0, minm=0;
    cin>> n;

    for(int i=0; i<n; i++)
    {
        cin>> j >>k;
        r=r-j+k;
        if(r>minm)
        {
            minm=r;
        }

    }

    cout<< minm;
}
