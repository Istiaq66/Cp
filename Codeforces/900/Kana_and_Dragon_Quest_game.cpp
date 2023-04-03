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
        ll h, n, m;
        cin >> h >> n >> m;
        while (n-- && h > 10)
        {
            h = (h / 2) + 10;
        }
        h = h - (10 * m);
        if (h > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}