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
        if (a == b)
        {
            cout << "0"
                 << " "
                 << "0" << endl;
        }
        else
        {
            ll c, x, y;

            c = abs(a - b);

            x = a % c;
            y = b % c;

            cout << c << " " << min(x, c - x)<< endl;
        }
    }
}