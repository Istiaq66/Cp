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
        ll x, n, z;
        cin >> x >> n;
        if (n % 4 == 0)
        {
            z = 0;
        }
        else if (n % 4 == 1)
        {
            z = -n;
        }
        else if (n % 4 == 2)
        {
            z = 1;
        }
        else if (n % 4 == 3)
        {
            z = n + 1;
        }

        if (abs(x % 2) == 1)
        {
            cout << x - z << endl;
        }
        else if (abs(x % 2) == 0)
        {
            cout << x + z << endl;
        }
    }
}