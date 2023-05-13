///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, sx = 0, sy = 0, sz = 0;
    cin >> n;
    ll x[n], y[n], z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];

        sx = sx + x[i];
        sy = sy + y[i];
        sz = sz + z[i];
    }
    if (sx == 0 && sy == 0 && sz == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}