///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, x = 0, z = 0;

    cin >> n;

    ll a[n], less = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            less++;
        }

        if (a[i] == 0)
        {
            z++;
        }
    }

    if (less % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                c = c + abs(a[i] + 1);
            }
            else if (a[i] > 1)
            {
                c = c + a[i] - 1;
            }
            else if (a[i] == 0)
            {
                c = c + 1;
            }
        }
        cout << c;
    }
    else if (less % 2 == 1)
    {

        ll x = 0;
        if (z == 0)
        {

            for (int i = 0; i < n; i++)
            {
                if (a[i] < 0 && x == 0)
                {
                    c = c + abs(a[i] - 1);
                    x = 1;
                }
                else if (x > 0 && a[i] < 0)
                {
                    c = c + abs(a[i] + 1);
                }
                else if (a[i] > 1)
                {
                    c = c + a[i] - 1;
                }
            }
            cout << c;
        }
        else if (z > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] < 0)
                {
                    c = c + abs(a[i] + 1);
                }
                else if (a[i] > 1)
                {
                    c = c + a[i] - 1;
                }
                else if (a[i] == 0)
                {
                    c = c + 1;
                }
            }
            cout << c;
        }
    }
}