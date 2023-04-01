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

        if (m <= n)
        {
            while (m--)
            {
                h = h - 10;
            }
            if (h != 0)
            {
                while (n--)
                {
                    h = (h / 2) + 10;
                }
            }
        }
        else
        {
            while (n--)
            {
                h = (h / 2) + 10;
            }

            while (m--)
            {
                h = h - 10;
            }
        }

        if (h <= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}