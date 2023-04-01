///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    ll c = 0;

    for (int i = 0; i < m; i++)
    {
    
        if (a[i] < 0)
        {
            c += a[i];
        }
    }

    cout << abs(c);
}