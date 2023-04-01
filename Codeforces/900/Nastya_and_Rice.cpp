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
        ll n, a, b, c, d, n1, n2, w1, w2;
        cin >> n >> a >> b >> c >> d;

        n1 = n * (a + b);
        n2 = n * (a - b);
        w1 = c + d;
        w2 = c - d;
        if (w2<=n1 && w1>=n2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}