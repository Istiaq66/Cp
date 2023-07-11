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
        ll n, cnt0 = 0, cnt1 = 0, cnt2 = 0;

        cin >> n;

        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 3 == 0)
            {
                cnt0++;
            }
            else if (a[i] % 3 == 1)
            {
                cnt1++;
            }
            else if (a[i] % 3 == 2)
            {
                cnt2++;
            }
        }

        if (cnt0 == cnt1 && cnt1 == cnt2)
        {
            cout << 0 << nl;
        }
        else
        {
            ll x, c = 0;
            x = cnt0 + cnt1 + cnt2;
            x = x / 3;

            while (1)
            {
                if (cnt0 == cnt1 && cnt1 == cnt2)
                {
                    break;
                }
                if (cnt0 > x)
                {
                    cnt0 = cnt0 - 1;
                    cnt1 = cnt1 + 1;
                }
                else if (cnt1 > x)
                {
                    cnt1 = cnt1 - 1;
                    cnt2 = cnt2 + 1;
                }
                else if (cnt2 > x)
                {
                    cnt2 = cnt2 - 1;
                    cnt0 = cnt0 + 1;
                }
                c++;
            }
            cout << c << nl;
        }
    }
}