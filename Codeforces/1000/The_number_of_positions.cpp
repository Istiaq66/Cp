///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, a, b, x;
    cin >> n >> a >> b;
    x = n - a;
    if (x > b)
    {
        cout << b + 1;
    }
    else
    {
        cout << x;
    }
}