///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x = 0;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << nl;
        }
        else if (n == 2)
        {
            cout << "-1" << nl;
        }
        else
        {
            ll a[n][n];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    x++;
                    a[i][j] = x;
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 == 1 && i != n - 1)
                    {
                        swap(a[i][j], a[i + 1][j]);
                    }
                    cout << a[i][j] << " ";
                }
                cout << nl;
            }
        }
    }
}