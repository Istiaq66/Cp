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
        ll n, k;
        cin >> n >> k;

        if (k % n == 0)
        {
            cout << k << nl;
        }
        else if (n < k)
        {
            cout << (k / n) + 1 << nl;
        }
        else if (n > k)
        {

            ll i = 1;
            while (k < n)
            {
                k = k * i;
                i++;
            }

            if (n < k)
            {
                cout << (k / n) + 1 << nl;
            }
        }
    }
}
