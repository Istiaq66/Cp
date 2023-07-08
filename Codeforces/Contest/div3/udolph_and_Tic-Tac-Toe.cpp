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
        char a[4][4], res, res1, res2, res4;

        ll x = 0, o = 0, p = 0;

        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                cin >> a[i][j];
            }
        }

        if (a[1][1] == a[1][2] && a[1][2] == a[1][3] && a[1][1]!='.')
        {
            cout << a[1][1] << nl;
        }
        else if (a[2][1] == a[2][2] && a[2][2] == a[2][3] && a[2][2]!='.')
        {
            cout << a[2][2] << nl;
        }
        else if (a[3][1] == a[3][2] && a[3][2] == a[3][3] && a[3][1]!='.')
        {
            cout << a[3][1] << nl;
        }

        else if (a[1][1] == a[2][1] && a[2][1] == a[3][1] && a[1][1]!='.')
        {
            cout << a[1][1] << nl;
        }
        else if (a[1][2] == a[2][2] && a[2][2] == a[3][2] && a[1][2]!='.')
        {
            cout << a[1][2] << nl;
        }
        else if (a[1][3] == a[2][3] && a[2][3] == a[3][3] && a[1][3]!='.')
        {
            cout << a[1][3] << nl;
        }
        else if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1]!='.' )
        {
            cout << a[1][1] << nl;
        }
        else if (a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3]!='.' )
        {
            cout << a[1][3] << nl;
        }
        else
        {
            cout << "DRAW" << nl;
        }
    }
}