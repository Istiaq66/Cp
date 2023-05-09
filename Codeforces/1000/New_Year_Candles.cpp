///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll a, b;
    cin >> a >> b;

    ll sum = a;

    while (a >= b)
    {
        sum = sum + (a / b);
        a = (a / b) + (a % b);
    }
    cout << sum;
}