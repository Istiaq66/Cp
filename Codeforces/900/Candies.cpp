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
        ll n, x, p = 1;
        cin >> n;
        for (int i = 2; i <= 30; i++)
        {

            p = pow(2, i) - 1;
            if (n % p == 0)
            {
                x = n / p;
                break;
            }
        }
        cout << x << endl;
    }
}