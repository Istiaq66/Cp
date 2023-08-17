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
        ll n;
        cin >> n;
        ll a[n];
        vector<int> b;
        vector<int> c;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        ll f = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < a[i + 1] && i < n - 1)
            {
                f++;
            }

            if (a[n - 1] == a[i])
            {
                c.push_back(a[i]);
            }
            else
            {
                b.push_back(a[i]);
            }
        }

        if (f == 0)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << b.size() << " " << c.size() << nl;

            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }

            cout << nl;

            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }

            cout << nl;
        }
    }
}