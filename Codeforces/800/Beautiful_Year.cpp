///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, f = 0;
    cin >> n;
    n++;
    while (1)
    {

        ll a, b, c, d;
        a = n / 1000;
        b = (n / 100) % 10;
        c = (n / 10) % 10;
        d = n % 10;

        if (a != b && b != c && c != d && a!=c && a!=d && b!=d)
        {
            cout << n;
            f++;
            break;
        }
        else
        {
            n++;
        }
    }
    if (f == 0)
    {
        cout << n;
    }
}