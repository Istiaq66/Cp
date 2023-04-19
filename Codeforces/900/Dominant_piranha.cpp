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
        ll n, max = INT_MIN, c = 1, index;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {

            if (a[i] > a[i - 1] && i > 0 || a[i] > a[i + 1] && i < n - 1)
            {
                if (a[i] >= max)
                {
                    max = a[i];
                    index = i;
                }
            }

            if (a[i] == a[i - 1] && i > 0)
            {
                c++;
            }
        }

        if (c == n)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << index + 1 << endl;
        }
    }
}