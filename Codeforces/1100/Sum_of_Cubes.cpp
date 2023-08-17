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
        ll x;
        cin >> x;
        vector<ll> v;
        for (int i = 1; i <= 10000; i++)
        {
            v.push_back(1ll * i * i * i);
        }

        ll f = 0;

        for (int i = 0; i < v.size(); i++)
        {
            ll n;
            n = v[i];
            if (n > x)
            {
                break;
            }
            else
            {
                ll i = 0, j = v.size() - 1;
                while (i <= j)
                {
                    ll mid = (i + j) / 2;
                    if (v[mid] == (x - n))
                    {
                        f = 1;
                        break;
                    }
                    else if (v[mid] < (x - n))
                    {
                        i = mid;
                    }
                    else if (v[mid] > (x - n))
                    {
                        j = mid - 1;
                    }
                }
            }
        }
        if (f)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}
