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
        ll n, x, sum = 0, sumx = 0;
        cin >> n >> x;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ll c;
            c = ceil((double)a[i] / x);
            sum = sum + c;
            sumx = sumx + a[i];
        }
        sumx = ceil((double)sumx / x);
        cout << sumx << " " << sum << nl;
    }
}