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
        string s, p;
        cin >> s >> p;
        ll r1, r2;
        r1 = s.size();
        r2 = p.size();
        ll lcm = (r1 * r2) / __gcd(r1, r2);

        string a, b;
        for (int i = 0; i < lcm / r1; i++)
        {
            a = a + s;
        }
        for (int i = 0; i < lcm / r2; i++)
        {
            b = b + p;
        }
        if (a == b)
        {
            cout << a << nl;
        }
        else
        {
            cout << "-1" << nl;
        }
    }
}