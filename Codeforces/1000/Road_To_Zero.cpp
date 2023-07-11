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
        ll x, y, a, b, r, c;
        cin >> x >> y >> a >> b;

        r = abs(x - y);

        if (r == 0)
        {
            cout << r;
        }
        else if (x < y)
        {
            cout << (x * b) + (r * a) << nl;
        }
        else if (y < x)
        {
            cout << (y * b) + (r * a) << nl;
        }
    }
}