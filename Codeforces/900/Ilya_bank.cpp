///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n;
    cin >> n;
    if (n > 0)
    {
        cout << n;
    }
    else if (n < 0)
    {
        ll a, b;
        a = n % 10;
        b = (n / 10) % 10;
        if (a >= b)
        {
            n = (n / 100)*10;
            n=n+a;
            cout<<n;
        }
        else if (a <= b)
        {
            cout << n/10;
        }
    }
}