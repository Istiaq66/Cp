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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }

        ll max = 0, id=0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first <= 10)
            {
                if (max < v[i].second)
                {
                    max = v[i].second;
                    id=i;
                }
            }
        }
        cout << id + 1 << nl;
    }
}