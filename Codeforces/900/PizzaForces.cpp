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
        ll n, r, p = 0;
        cin >> n;

        if (n <= 6)
        {
            p = 15;
        }
        else
        {
            if (n % 2 == 0)
            {
                p = n * 2.5;
            }
            else
            {
                p = (n + 1) * 2.5;
            }
        }

        cout << p << endl;
    }
}