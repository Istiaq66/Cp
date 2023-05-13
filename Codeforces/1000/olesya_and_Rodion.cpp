///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, t, x, c = 0;
    cin >> n >> t;

    x = t;

    while (x != 0)
    {
        x = x / 10;
        c++;
    }

    if (n >= c && t == 10)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << "1";
        }
        cout << "0";
    }
    else if (n >= c)
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else
    {
        cout << "-1";
    }
}