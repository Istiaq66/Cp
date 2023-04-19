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
        ll n, h, m, ans = INT_MAX;
        cin >> n >> h >> m;
        for (int i = 0; i < n; i++)
        {
            ll _h, _m, hh, mm, cnt = 0;
            _h = h;
            _m = m;
            cin >> hh >> mm;

            while (true)
            {
                if (_h == hh && _m == mm)
                {
                    break;
                }
                else
                {
                    cnt++;
                    _m++;
                    if (_m == 60)
                    {
                        _m = 0;
                        _h++;
                        if (_h == 24)
                        {
                            _h = 0;
                        }
                    }
                }
            }
            ans = min(ans, cnt);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
}