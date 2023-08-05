//   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

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
        ll n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> v;

        for (int i = 1; i <= n; i++)
        {
            ll a;
            cin >> a;
            if (a % k == 0)
            {
                v.push_back(make_pair(0, i));
            }
            else
            {
                ll x = a % k;
                v.push_back(make_pair(abs(x - k), i));
            }
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            cout << v[i].second<<" ";
        }
        cout << nl;
    }
}