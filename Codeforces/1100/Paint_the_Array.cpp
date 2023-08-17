///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

ll gcd(ll a, ll b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {

        ll n, odd = 0, even = 0;

        vector<ll> a;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                even = gcd(even, a[i]);
            }
            else
            {
                odd = gcd(odd, a[i]);
            }
        }
        ll div1 = 0, div2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] % odd == 0)
                {
                    div1++;
                }
            }

            else
            {
                if (a[i] % even == 0)
                {
                    div2++;
                }
            }
        }

        if (div1 > 0 && div2 > 0)
        {
            cout << 0 << nl;
        }
        else if (div1 == 0)
        {
            cout << odd << nl;
        }
        else if (div2 == 0)
        {
            cout << even << nl;
        }
    }
}