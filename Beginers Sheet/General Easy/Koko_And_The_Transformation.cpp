///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, m, a = 0, b = 0;

    cin >> n >> m;

    while (n--)
    {
        ll x;
        cin >> x;
        a += x;
    }

    while (m--)
    {
        ll x;
        cin >> x;
        b += x;
    }

    if (a == b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}