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
        ll n, sum = 0;
        cin >> n;
        vector<int> a;
        vector<int> b(n, 1);
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
            sum = a[i] + sum;
        }

        ll f = 0, avg = sum / n;
        ll x = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == avg)
            {
                x = x + avg;
            }
            if (x > sum)
            {
                break;
            }
        }
        if (f == 1)
        {
            cout << "No" << nl;
        }
        else
        {
            cout << "Yes" << nl;
        }
    }
}