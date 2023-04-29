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
        ll n, z = 0, x = 0, f = 0;
        cin >> n;
        ll h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        for (int i = 0; i < n; i++)
        {

            x = (i * (i + 1)) / 2;
            z += h[i];
            if (z < x)
            {
                cout << "NO" << endl;
                f++;
                break;
            }
        }

        if (f == 0)
        {
            cout << "YES" << endl;
        }
    }
}