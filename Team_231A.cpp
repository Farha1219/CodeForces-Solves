
#include<iostream>
using namespace std;

int main()
{
    int result=0,count,i,j, n,a;
    cin>> n;

    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<3; j++)
        {
            cin>> a;
            if(a==1)
            {
                count= count+1;
            }
        }
        if(count>>1)
        {
            result= result+1;
        }

    }
    cout<< result;
    //return result;

}
