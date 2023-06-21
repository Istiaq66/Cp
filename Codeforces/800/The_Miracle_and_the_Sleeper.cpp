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

        ll r, l, max = 0;

        cin >> r >> l;

        /*   for (int i = r; i < l; i++)
          {

              if (l % i > max)
              {
                  max = l % i;
              }
          }
          cout << max << nl;          TLE Happens     */

        if (r > l / 2)
        {

            cout << l - r << endl;
        }
        else if (l % 2 == 1)
        {
            cout << l / 2 << nl;
        }
        else
        {
            cout << (l / 2) - 1 << nl;
        }
    }
}