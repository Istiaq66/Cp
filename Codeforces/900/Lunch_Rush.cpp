///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, k, max = INT_MIN, joy;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        ll f, t;
        cin >> f >> t;
        if (t > k)
        {
            joy = f - (t - k);
        }
        else
        {
            joy = f;
        }
        if (max < joy)
        {
            max = joy;
        }
    }
    cout<<max;
}