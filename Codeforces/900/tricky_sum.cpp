///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        sum = (n * (n + 1)) / 2;

        for (int i = 0; pow(2, i) <= n; i++)
        {
                sum = sum - pow(2, i+1);
        }

        cout << sum << endl;
    }
}