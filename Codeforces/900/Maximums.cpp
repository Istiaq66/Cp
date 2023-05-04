///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, x = 0;
    cin >> n;
    ll b[n], a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i] + x;
        x = max(x, a[i]);
        cout << a[i] << ' ';
    }
}