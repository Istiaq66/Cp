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
        ll n, c = 0, odd = 0, even = 0;
        cin >> n;
        vector<int> v;
        vector<int> r;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
            if (v[i] % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        r = v;

        sort(r.begin(), r.end());

        ll f = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != r[i] % 2)
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }
}