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
        vector<pair<int, int>> v;
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        ll c = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first > v[i].second)
            {
                c++;
            }
        }
        cout << c << nl;
    }
}