///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, b, d, j = 0, c = 0;
    cin >> n >> b >> d;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= b)
        {
            j = j + a[i];
        }

        if (j > d)
        {
            c++;
            j=0;
        }
    }
    cout<<c;
}