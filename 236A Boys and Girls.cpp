#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string c;
        cin>> c;
        set<char> st;

        for(char x : c)
            {
                st.insert(x);
            }
        if(st.size()%2==0)
            {cout<< "CHAT WITH HER!";}
        else{cout<< "IGNORE HIM!";}

    }
