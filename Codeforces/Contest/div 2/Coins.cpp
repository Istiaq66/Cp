///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << "YES"<<endl;
        }
        else if (n % 2 == 1 && (n - k) % 2 == 0)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
}