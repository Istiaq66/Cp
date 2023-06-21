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
        ll a, b, c;
        cin >> a >> b >> c;

        if (a >= c)
        {
            cout << "-1 ";
        }
        else
        {
            cout << "1 ";
        }

        if (b * a > c)
        {
            cout << b << nl;
        }
        else
        {
            cout << "-1" << nl;
        }
    }
}