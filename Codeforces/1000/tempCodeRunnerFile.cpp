///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());

    ll c = 1, m = 0, r;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
            if (m < c)
            {
                m = c;
                r = a[i];
            }
        }
        else
        {
            c = 1;
        }
    }
    cout << m <<" "<< r / m;
}