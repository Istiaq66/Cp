///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, t;
    cin >> n;
    ll a[n];
    t = n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());

    ll c = 1, m = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
            t--;
            if (m <= c)
            {
                m = c;
            }
        }
        else
        {
            c = 1;
        }
    }
    cout << m << " " <<t ;
}