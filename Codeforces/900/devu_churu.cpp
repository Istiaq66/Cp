///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, d, sum = 0, joke;

    cin >> n >> d;

    ll t[n];

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];

        if (i != n - 1)
        {
            sum = sum + t[i] + 10;
        }
        else
        {
            sum = sum + t[i];
        }
    }

    if (sum <= d)
    {
        sum = d - sum;

        joke = (n - 1) * 10;

        joke = (sum + joke) / 5;

        cout << joke << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}