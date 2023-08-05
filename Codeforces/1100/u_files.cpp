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
        ll n, k, c = 0;

        cin >> n >> k;
        ll u = 1;
        while (u < k)
        {
            u = u * 2;
            c++;
        }
        if (u >= n)
        {
            cout << c << nl;
        }
        else
        {
            n = n - u;

            if (n % k == 0)
            {
                c = (n / k) + c;
                cout << c << nl;
            }
            else
            {
                c = (n / k) + c;
                cout << c + 1 << nl;
            }
        }
    }
}