///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, a = 0, b = 0, c = 0;

    cin >> n;

    vector<int> v, m;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        m.push_back(x);
    }

    sort(m.begin(), m.end());

    a=m[0];

    for (int i = 1; i < n; i++)
    {
        if (m[i] > m[i - 1] && b == 0 && a != 0)
        {
            b = m[i];
        }
        else if (m[i] > m[i - 1] && c == 0 && a != 0 && b != 0)
        {
            c = m[i];
        }
    }

    if (a == 0 || b == 0 || c == 0)
    {
        cout << "-1" << nl;
    }
    else
    {
        ll x, y, z;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == a)
            {
                x = i;
            }
            if (v[i] == b)
            {
                y = i;
            }
            if (v[i] == c)
            {
                z = i;
            }
        }

        cout << x+1 << " " << y+1 << " " << z+1;
    }
}