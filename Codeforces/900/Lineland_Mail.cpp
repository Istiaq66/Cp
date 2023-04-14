///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;
int main()
{
    ll n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        int mn, mx, m = 0;

        if (i == 0)
        {
            mx = abs(a[0] - a[n - 1]);
            mn = abs(a[0] - a[1]);
        }
        else if (i > 0 && i < n - 1)
        {
            mx = max(abs(a[i] - a[n - 1]), abs(a[0] - a[i]));
            mn = min(abs(a[i] - a[i + 1]), abs(a[i - 1] - a[i]));
        }
        else if (i = n - 1)
        {
            mx = abs(a[0] - a[n - 1]);
            mn = abs(a[n - 2] - a[n - 1]);
        }

        cout << mn << " " << mx << endl;
    }
}