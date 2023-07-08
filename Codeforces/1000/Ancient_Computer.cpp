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
        ll a, b, c = 0;
        cin >> a >> b;

        if (a > b)
        {
            swap(a, b);
        }

        if (a == b)
        {
            cout << 0 << nl;
        }
        else if (b % a != 0)
        {
            cout << "-1" << nl;
        }
        else
        {
            b = b / a;
            while (b % 8 == 0 || b % 4 == 0 || b % 2 == 0)
            {
                if (b % 8 == 0)
                {
                    b = b / 8;
                }
                else if (b % 4 == 0)
                {
                    b = b / 4;
                }
                else if (b % 2 == 0)
                {
                    b = b / 2;
                }
                c++;
            }
            if (b == 1)
            {
                cout << c << nl;
            }
            else
                cout << "-1" << nl;
        }
    }
}