///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, c = 0;
    cin >> n;
    ll a[n], b[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == a[j])
            {
            break;
            }
        }
    }
    cout << c << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << b[i];
    }
}