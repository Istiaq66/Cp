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
        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        b = a;
        sort(b.begin(), b.end());
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            ll max = a[0];
            for (int i = 0; i < n-1; i++)
            {
                if (a[i] > a[i + 1])
                {
                    if (max < a[i])
                    {
                        max = a[i];
                    }
                }
            }
            cout << max << nl;
        }
        else
        {
            cout << 0 << nl;
        }
    }
}