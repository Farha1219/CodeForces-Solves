#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        total += ar[i];
    }

    sort(ar, ar + n, greater<int>());

    int mySum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        mySum += ar[i];
        count++;

        if (mySum > total - mySum)
        {
            break;
        }
    }

    cout << count;

    return 0;
}
