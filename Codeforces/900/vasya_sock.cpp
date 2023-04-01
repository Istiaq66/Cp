///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;

    for (int i = 1; m * i <= n; i++)
    {
        cout << n<<" ";
        n++;
    }
    cout << n;
}