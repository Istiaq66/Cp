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
        ll n, p = 5;

        cin >> n;

        if (n == 1)
        {
            cout << "-1" << nl;
        }
        else
        {
            n = n - 1;
            cout << p;
            while (n--)
            {
                cout << 7;
            }
            cout << nl;
        }
    }
}