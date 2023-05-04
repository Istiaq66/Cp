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
        ll n, c = 0, d = 0;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a[i] = x;
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i + 1])
            {
                a[i] = a[i] / 2;
                c++;
                if (a[i] <= a[i - 1])
                {
                    a[i - 1] = a[i - 1] / 2;
                    c++;
                }
            }
            else if (a[i] < a[i - 1])
            {
                d++;
            }
        }
        if (d == n - 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}