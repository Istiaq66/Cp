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
        ll n, m, k, x, y, e = 0;
        cin >> n >> m >> k >> x >> y;

        for (int i = 1; i <= k; i++)
        {
            ll a, b;
            cin >> a >> b;
            if ((abs(y - b) + abs(x - a)) % 2 == 0)
            {
                e = 1;
            }
        }
        if (e)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }
}