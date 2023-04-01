///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, m, min = INT_MAX, v;
    cin >> n >> m;
    ll a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a, a + m);

    for (int i = 0; i < m; i++)
    {
        v = a[n - 1] - a[i];
        if (min > v)
        {
            min = v;
        }

        if (n == m)
        {
            break;
        }
        else
        {
            n++;
        }
    }

    cout << min;
}