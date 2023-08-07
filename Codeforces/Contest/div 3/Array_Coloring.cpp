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
        ll n, odd = 0, even = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (odd % 2 == 1)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }
}