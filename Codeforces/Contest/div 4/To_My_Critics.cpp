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
        ll a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        sort(a, a + 3, greater<int>());

        if ((a[0] + a[1]) >= 10)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}