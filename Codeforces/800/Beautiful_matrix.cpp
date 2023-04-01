///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll a[6][6];
    ll m, n, r;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                m = i;
                n = j;
            }
        }
    }
    if (m >= 3)
    {
        m = m - 3;
    }
    else
    {
        m = 3 - m;
    }
    if (n >= 3)
    {
        n = n - 3;
    }
    else
    {
        n = 3 - n;
    }
    r = m + n;
    cout << r;
}