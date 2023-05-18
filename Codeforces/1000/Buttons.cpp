///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll sum = n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (n - i) * i;
    }
    cout << sum << nl;
}