///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, m, j, k, f = 0;
    cin >> n >> m >> j >> k;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m,greater<int>());

    if (a[j-1] < b[k-1])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}