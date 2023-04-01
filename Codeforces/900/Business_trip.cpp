///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll k, c = 0, m = 0;
    ll a[12];
    cin >> k;
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 12, greater<int>());

    for (int i = 0; i < 12; i++)
    {
        if (m >= k)
        {
            break;
        }

        m = m + a[i];
        c++;
    }
    if (c == 12 & m < k)
    {
        cout << "-1";
    }
    else
    {
        cout << c;
    }
}