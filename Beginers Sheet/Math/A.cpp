///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, c = 0;
    cin >> n;

    if ((n & n - 1) == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}