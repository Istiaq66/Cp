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
        ll n, m, sum = 0;
        vector<ll> a;
        vector<ll> b;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end(), greater<int>());

        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            b.push_back(x);
        }

        sort(b.begin(), b.end(), greater<int>());

        if (n > m)
        {
            for (int i = 0; i < n - m; i++)
            {
                sum = sum + a[i]; 
            }
            for (int i = 0; i < m; i++)
            {
                sum = sum + b[i];
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                sum = sum + b[i];
            }
        }

        cout << sum << nl;
    }
}