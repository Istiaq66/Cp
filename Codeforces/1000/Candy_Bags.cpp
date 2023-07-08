///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, x = 1, a = 0, b = 1;
    cin >> n;
    ll y = n * n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            if (a == 0)
            {
                cout << x << " ";
                x++;
                a = 1;
                b = 0;
            }
             if (b == 0)
            {
                cout << y;
                y--;
                a = 0;
                b = 1;
                if (j != n - 1)
                {
                    cout << " ";
                }
            }
        }
        cout << nl;
    }
}