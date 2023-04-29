///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n;
    cin >> n;
    ll a = n / 5;

    if (n <= 5)
    {
        cout << "1";
    }
    else if (n % 5 == 0)
    {
        cout << a;
    }
    else
    {
        cout << a + 1;
    }
}