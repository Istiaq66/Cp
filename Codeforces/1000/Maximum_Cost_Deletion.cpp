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
        ll n, a, b, result, cnt1 = 0, cnt2 = 0, z = 0;

        string s;

        cin >> n >> a >> b >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                while (s[i] == '0' && i < n)
                {
                    i++;
                    z++;
                }
                cnt1++;
            }
        }

        if (z != n)
            cnt1++;

        z = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                while (s[i] == '1' && i < n)
                {
                    i++;
                    z++;
                }
                cnt2++;
            }
        }

        if (z != n)
            cnt2++;

        ll cnt = min(cnt1, cnt2);

        if (b > 0)
        {
            result = (n * a) + (n * b);

            cout << result << nl;
        }
        else
        {
            result = (n * a) + (cnt * b);

            cout << result << nl;
        }
    }
}