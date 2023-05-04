///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, c = 0;
    cin >> n;

    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 744 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}