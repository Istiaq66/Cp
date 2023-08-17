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
        ll n;
        cin >> n;
        vector<int> a;
        vector<int>::iterator it;

        for (int i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            a.push_back(m);
        }

        for (int i = 0; i < n; i++)
        {
            while (a[i] > n)
            {
                a[i] = a[i] / 2;
            }
            while (find(a.begin(), a.end(), a[i]) != a.end())
            {
                a[i] = a[i] / 2;
            }
            if (a[i] > 0)
            {
                a[i] = 1;
            }
        }
        ll c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                c++;
            }
        }
        if (c == n)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}