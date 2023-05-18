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
        ll a, b;
        cin >> a >> b;

        ll x, y, z;
        x = a;
        y = a * b;
        z = a * (b + 1);
        if (b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << nl;
        }
    }
}