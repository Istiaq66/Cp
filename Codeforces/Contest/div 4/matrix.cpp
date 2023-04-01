///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;

    ll a[n][m], b[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (n == m)
                {
                    b[i][j] = a[j][i];
                }
                cout << b[i][j]<<" ";
            }
            cout << endl;
        }
    
}