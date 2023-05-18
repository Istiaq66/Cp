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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            ll sum = 0;
            ll v = 8;
            for (int i = 1; i <= n / 2; i++)
            {
                sum += i * v; // sum = 0 + 1*8
                              // sum = 8 + 2*16
                              // sum = 40 + 3*24
                v += 8;
            }
            cout << sum << endl;
        }
    }
}