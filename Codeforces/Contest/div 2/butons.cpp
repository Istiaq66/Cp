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
        ll a, b, c, now = 0;

        cin >> a >> b >> c;

        if (a > b)
        {
            cout << "First" << nl;
        }
        else if (b > a)
        {
            cout << "Second" << nl;
        }
        else if (a == b)
        {
            if (c % 2 == 1)
            {
                cout << "First" << nl;
            }
            else
            {
                cout << "Second" << nl;
            }
        }
    }
}