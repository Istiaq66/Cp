///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, q;

    cin >> n >> q;

    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--)
    {
        ll x, f = 0;
        cin >> x;
        ll l, r, mid;

        l = 0;
        r = n - 1;
        while (l <= r)
        {
            mid = (l + r) / 2;

            if (a[mid] == x)
            {
                cout << "found" << nl;
                f = 1;
                break;
            }
            else if (x > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (f == 0)
        {
            cout << "not found" << nl;
        }
    }
} 