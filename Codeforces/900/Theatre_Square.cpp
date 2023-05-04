///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    double x = ceil((double)n / a) * ceil((double)m / a);
    cout << (ll)x;
}