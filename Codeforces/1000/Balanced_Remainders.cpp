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
        ll n, cnt0 = 0, cnt1 = 0, cnt2 = 0, p1, p2, p3;
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

        ll x = cnt0 + cnt1 + cnt2;

        p1 = cnt0 - x;
        p2 = cnt1 - x;
        p3 = cnt2 - x;

        ll r, move = 0;

        r = p1 + p2 + p3;

        r = r / 3;

        if (p1 < r)
        {
            move = abs(p1 - r);
        }

        if (p2 < r)
        {
            move = move + abs(p2 - r);
        }

        if (p3 < r)
        {
            move = move + abs(p3 - r);
        }
        cout << move << nl;
    }
}