///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, c = 0, total = 0;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            total++;
        }
    }
    cout << min(total, n - total);
}

// Jodi shob ghula k odd or shb ghula k even krte pary tahole coin khoroch hbena tai min count of odd or n-odd nite hobe