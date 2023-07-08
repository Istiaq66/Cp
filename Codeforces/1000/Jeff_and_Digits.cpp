///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, cnt0 = 0, cnt5 = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (x == 0)
        {
            cnt0++;
        }

        if (x == 5)
        {
            cnt5++;
        }
    }

    if (cnt5 >= 9 && cnt0 >= 1)
    {
        ll r = cnt5 % 9;

        for (int i = 0; i < cnt5 - r; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < cnt0; i++)
        {
            cout << 0;
        }
    }
    else if (cnt0 >= 1)
    {
        cout << 0;
    }
    else
    {
        cout << -1;
    }
}