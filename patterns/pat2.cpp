#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}