///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n;
    cin >> n;
    ll a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    ll p = 0, s = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                p = p + a[i][j];
            }
        }
    }

    ll j = n - 1;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i][j];
        j--;
    }

    cout << abs(p - s);
}