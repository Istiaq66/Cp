///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
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

    sort(v.begin(), v.end());
    ll f = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (v[i].first < v[i + 1].first)
        {
            if (v[i].second > v[i + 1].second)
            {
                cout << "Happy Alex";
                f = 1;
                break;
            }
        }
    }
    if (f == 0)
    {
        cout << "Poor Alex";
    }
}