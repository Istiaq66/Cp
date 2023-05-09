///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, sum = 0, result = 0, min = INT_MAX;
    cin >> n;
    ll a[n], p[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> p[i];
        sum = sum + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i] < min)
        {
            result = result + a[i] * p[i];
            sum = sum - a[i];
            min = p[i];
        }
        else
        {
            result = result + a[i] * min;
            sum = sum - a[i];
        }
    }
    cout << result;
}