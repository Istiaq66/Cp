///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, h, m, c = 1, mx = 1;

    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> h >> m;
        v.push_back(make_pair(h, m));
    }

    for (int i = 0; i < n - 1; i++)
    {
        while ((i < n - 1) && (v[i].first == v[i + 1].first && v[i].second == v[i + 1].second))
        {
            c++;
            i++;
        }
        if  (c > mx)
        {
            mx = c;
        }
        c = 1;
    }
    cout << mx;
}