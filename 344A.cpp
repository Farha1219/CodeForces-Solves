#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n, i, m, f=1;

    cin>> n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>> a[i];
    }

    m=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]!=m)
        {
            m=a[i];
            f=f+1;
        }
    }
    cout<< f;
}
