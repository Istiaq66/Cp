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

        if (n <= 10)
        {
            if (n <= 6)
            {
                p = 15;
            }
            else if (n <= 8 && n > 6)
            {
                p = 20;
            }
        }
        else
        {

            if (n % 6 == 5 || n % 6 == 0)
            {
                r = n % 6;
                n = n / 6;
                p = n * 15;
            }
            else
            {
                r = n % 10;
                n = n / 10;
                p = n * 25;
            }

            if (n <= 6 && r != 0)
            {
                p = p + 15;
            }
            else if (n <= 8 && n > 6 && r != 0)
            {
                p = p + 20;
            }
            else if (n > 8 && r != 0)
            {
                p = p + 25;
            }
        }

        cout << p << endl;
    }
}