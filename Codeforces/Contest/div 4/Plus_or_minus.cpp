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
        ll a, b, c;
        cin>>a>>b>>c;
        if ((a + b) == c)
        {
            cout << "+" << endl;
        }
        else if ((a - b) == c)
        {
            cout << "-" << endl;
        }
    }
}