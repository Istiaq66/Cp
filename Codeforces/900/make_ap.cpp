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
        ll a, b, c, r;
        cin >> a >> b >> c;
        if (((2 * b) - c) % a == 0 && ((2 * b) - c) > 0)
        {
            cout << "YES" << endl;
        }
        else if ((a + c) % (2 * b) == 0)
        {
            cout << "YES" << endl;
        }
        else if (((2 * b) - a) % c == 0 && ((2 * b) - a) > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}