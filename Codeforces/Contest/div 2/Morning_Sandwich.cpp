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
        ll b, c, h, ch, r = 0;
        cin >> b >> c >> h;

        ch = c + h;

        if (b <= ch)
        {
            r = b + (b - 1);
        }
        else
        {
            r = ch + (ch + 1);
        }

        cout << r << nl;
    }
}