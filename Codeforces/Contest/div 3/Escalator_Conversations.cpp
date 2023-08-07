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
        ll n, m, k, H, c = 0;
        cin >> n >> m >> k >> H;
        ll h[n];
        ll max = (m * k) - k;

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            if (h[i] < H)
            {
                if ((H - h[i]) % k == 0 && (H - h[i]) <= max)
                {
                    c++;
                }
            }
            else if (h[i] > H)
            {
                if ((h[i] - H) % k==0 && (h[i] - H) <= max)
                {
                    c++;
                }
            }
        }
        cout << c << nl;
    }
}