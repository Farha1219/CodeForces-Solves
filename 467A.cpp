
#include<bits/stdc++.h>

using namespace std;
 int main()
 {
     int n,i,j,c, a=0;
     cin>> n;


     for(i=0; i<n; i++)
     {
        cin>> j >> c;
        if(c-j>=2)
        {
        a=a+1;
        }
     }
    cout << a;

 }
