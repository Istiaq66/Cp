///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

int main()
{

    ll s, n, f = 0;

    cin >> s >> n;
    ll x, y;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (s > v[i].first)
        {
            s = s + v[i].second;
        }
        else
        {
            f = 1;
        }
    }

    if (f)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}