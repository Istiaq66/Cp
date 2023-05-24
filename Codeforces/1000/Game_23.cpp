///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, m, c = 0;
    cin >> n >> m;

    if (m == n)
    {
        cout << c;
    }
    else if (m % n == 0)
    {
        ll x = m / n;
        while (x != 1)
        {
            if (x % 2 == 0)
            {
                x = x / 2;
            }
            else if (x % 3 == 0)
            {
                x = x / 3;
            }
            else
            {
                c = 0;
                break;
            }
            c++;
        }
        if (c)
        {
            cout << c;
        }
        else
        {
            cout << "-1";
        }
    }
    else
    {
        cout << "-1";
    }
}
