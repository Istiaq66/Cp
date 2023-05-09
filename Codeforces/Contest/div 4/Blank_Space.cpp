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
        ll n, max = 0, count = 0;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i]== 0)
            {
                count++;
                if (max <= count)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << max << endl;
    }
}