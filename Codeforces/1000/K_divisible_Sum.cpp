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
        ll n, k, s;
        cin >> n >> k;

        s = ceil((double)n / k);

        k *= s;

        if (k % n == 0)
        {
            cout << k / n << nl;
        }
        else
        {
            cout << (k / n) + 1 << nl;
        }
    }
}
