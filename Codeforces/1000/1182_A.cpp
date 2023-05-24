///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << 0;
    }
    else
    {
        ll x = n / 2;
        ll res = 1;
        while (x--)
        {
            res = res * 2;
        }
        cout << res;
    }
}