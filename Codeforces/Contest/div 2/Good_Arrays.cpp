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
        ll n, sum = 0, newsm = 0;
        cin >> n;
        vector<int> a;
        vector<int> b(n, 1);
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
            sum = sum + a[i];
            if (a[i] == 1)
            {
                a[i] = 2;
            }
            else
            {
                a[i] = 1;
            }
            newsm = newsm + a[i];
        }

        if (newsm == 1)
        {
            cout << "No" << nl;
        }
        else if (sum >= newsm)
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }
    }
}