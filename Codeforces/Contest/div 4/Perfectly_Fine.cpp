///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
long long findMin(long long a, long long b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, j = 0, r = INT_MAX, r1 = INT_MAX, r2 = INT_MAX, f1 = 0, f2 = 0, f3 = 0;
        cin >> n;
        ll a;
        string s;
        while (n--)
        {
            cin >> a;
            cin >> s;
            if (s[0] == '1' && s[1] == '1')
            {
                if (r > a)
                {
                    r = a;
                }
                f1 = 1;
            }
            else if (s[0] == '1' && s[1] == '0')
            {
                if (r1 > a)
                {
                    r1 = a;
                }
                f2 = 1;
            }
            else if (s[0] == '0' && s[1] == '1')
            {
                if (r2 > a)
                {
                    r2 = a;
                }
                f3 = 1;
            }
        }
        if (f1 == 1 && f2 == 1 && f3 == 1)
        {
            cout << findMin(r, r1 + r2) << nl;
        }
        else if (f1 == 1)
        {
            cout << r << nl;
        }
        else if (f2 == 1 && f3 == 1)
        {
            cout << r1 + r2 << nl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}