///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, m, c = 0;
    cin >> n >> m;

    if (n < m)
    {
        cout << "-1";
    }
    else
    {
        n = n + 1;
        if (m >= n / 2)
        {
            cout << m;
        }
        else if (m < n / 2)
        {
            ll i = 0;
            while (c < n / 2)
            {
                c = m * i;
                i++;
            }
            cout << c;
        }
    }
}