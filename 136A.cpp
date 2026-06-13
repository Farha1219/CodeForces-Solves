#include<iostream>
using namespace std;
int main()
{
    int n, p;
    cin>> n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>p;
        ar[p-1]=i+1;
    }
    for(int i=0; i<n; i++)
    {
        cout<< ar[i] <<' ';
    }
}
