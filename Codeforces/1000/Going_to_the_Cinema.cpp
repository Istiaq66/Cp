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
        ll n, f = 0;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i] < i + 1 && (v[i + 1] > i + 1 || i + 1 == n))
            {
                f++;
            }
        }

        if (v[0] != 0)
        {
            f++;
        }

        cout << f << nl;
    }
}