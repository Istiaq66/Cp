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
        ll n, operation = 0;

        cin >> n;

        vector<int> a, b;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            b.push_back(a[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                continue;
            }
            else
            {
                operation++;
                break;
            }
        }
        if (operation == 0)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }
}