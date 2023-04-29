///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, q;
    cin >> n >> q;
    ll a[n], p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    p[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + a[i];
    }

    while (q--)
    {
        ll x, y, r, l;
        cin >> x >> y;
        r = x - 1;
        l = r - y;
        if (x == y)
        {
            cout << p[x - 1] << endl;
        }
        else
        {
            cout << p[r] - p[l] << endl;
        }
    }
}