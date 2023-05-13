///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, m, sum = 0;
    cin >> n >> m;
    ll a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sum = a[0] - 1;

    for (int i = 0; i < m - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            sum = sum + (n - (a[i] - a[i + 1]));
        }
        else if (a[i] < a[i + 1])
        {
            sum = sum + (a[i + 1] - a[i]);
        }
    }
    cout << sum;
}