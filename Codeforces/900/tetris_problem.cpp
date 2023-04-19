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
        ll n, c = 0, odd = 0, even = 0;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a == 0)
            {
                c++;
            }

            if (a[i] % 2 == 1)
            {
                odd++;
            }
            else if (a[i] % 2 == 0)
            {
                even++;
            }
        }
        if (c == n)
        {
            cout << "NO" << endl;
        }
        else if (odd == n || even == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}