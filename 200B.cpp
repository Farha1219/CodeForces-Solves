
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    double b, a=0.0000;
    cin>> n;

    for(i=0; i<n; i++)
    {
        cin>> b;

        a=a+b;
    }
    double f = a/n;

    cout<< setprecision(12) << f;
}
