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
        double n, x, y;
        cin >> n;
        x = n / 2;
        y = n / 4;

        ll a, b;
        a = sqrt(x);
        b = sqrt(y);

        if (a * a == x || b * b == y)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}