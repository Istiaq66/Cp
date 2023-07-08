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

        x = x / 3;

        ll move;

        if (cnt0 < x)
        {
            move = abs(cnt0 - x);
        }

        if (cnt1 < x)
        {
            move = move + abs(cnt1 - x);
        }

        if (cnt2 < x)
        {
            move = move + abs(cnt2 - x);
        }
        cout << move << nl;
    }
}