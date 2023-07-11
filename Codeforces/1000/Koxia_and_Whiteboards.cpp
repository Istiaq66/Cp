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

        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            b.push_back(x);
        }

        for (int i = 0; i < m; i++)
        {
                sort(a.begin(), a.end(), greater<ll>());
                a.pop_back();
                a.push_back(b[i]);
        }

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        cout << sum << nl;
    }
}