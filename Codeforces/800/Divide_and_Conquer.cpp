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
        ll n, s = 0, c = INT_MAX, r, opp;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s = s + a[i];
        }
        if (s % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                opp = 0;
                r = a[i];
                while (r % 2 == a[i] % 2)
                {
                    opp++;
                    r /= 2;
                }
                c = min(c, opp);
            }
            cout << c << endl;
        }
    }
}