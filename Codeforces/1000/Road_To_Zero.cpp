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
        ll x, y, a, b, r, m, n;
        cin >> x >> y >> a >> b;

        if (y > x)
        {
            swap(x, y);
        }

        m = (y * b) + ((x - y) * a);

        n = (x + y) * a;

        cout << min(m, n) << nl;
    }
}