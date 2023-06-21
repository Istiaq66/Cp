///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, r = 0;
    vector<ll> v;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    for (int i = 0; i < 7;)
    {
        r = r + v[i];

        if (r >= n)
        {
            cout << i + 1;
            break;
        }
        else if (i == 6)
        {
            i = 0;
        }
        else
        {
            i++;
        }
    }
}