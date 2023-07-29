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
        ll b = 0, w = 0, n, k, max = 0;

        string s;

        cin >> n >> k >> s;
        ll j = 0;

        for (int i = 0; i < n; i++)
        {

            if (i + k <= n)
            {
                b = 0;
                for (int j = i; j < i + k; j++)
                {
                    if (s[j] == 'B')
                    {
                        b++;
                    }
                }
                if (b > max)
                {
                    max = b;
                }
            }
            else
            {
                break;
            }
        }
        cout << k - max << nl;
    }
}