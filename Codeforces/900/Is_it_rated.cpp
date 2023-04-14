///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, c = 0, r = 0, u = 0;
    cin >> n;
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];

        if (a[i] != b[i])
        {
            r = 1;
        }
        else if (a[i - 1] < a[i] && i > 0)
        {
            u = 1;

        }
        else if (a[i] == b[i])
        {
            c++;
        }
    }

    if (c == n)
    {
        cout << "maybe";
    }
    else if (r)
    {
        cout << "rated";
    }
    else if (u)
    {
        cout << "unrated";
    }
}