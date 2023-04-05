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

        char c[8][8];
        ll ans = -1, r;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> c[i][j];
            }
        }

        for (int i = 0; i < 8; i++)
        {
            r = 0;
            for (int j = 0; j < 8; j++)
            {
                if (c[i][j] == 'R')
                {
                    r++;
                }
                
                 if (r == 8)
                {
                    ans = 8;
                    break;
                }
            }
        }
        if (ans == 8)
        {
            cout << "R" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
}