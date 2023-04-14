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
        ll a, b, c, d, n;
        cin >> a >> b >> c >> d;
        if (a > b)
        {

            if (d >= c)
            {
                cout << "-1" << endl;
            }
            else
            {
                a = a - b;
                n = c - d;
                if (a % n == 0)
                {
                    a = a / n;
                    cout << (a * c) + b << endl;
                }
                else
                {
                    a = (a / n) + 1;
                    cout << (a * c) + b << endl;
                }
            }
        }


        else
        {
            cout << b << endl;
        }
    }
}