///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, m;
    cin >> n >> m;

    ll a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll ans, j;
    ans = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        ll x = ceil(a[i] / (m * 1.0));

        if (ans <= x)
        {
            ans = x;
            j = i;
        }
    }
    cout << j;
}