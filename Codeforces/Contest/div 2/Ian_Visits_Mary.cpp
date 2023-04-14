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
        ll a, b;
        cin >> a >> b;
        if (abs(a - b) == 1)
        {
            cout << "1" << endl;
            cout << a << " " << b << endl;
        }
        else if (a + 1 >= 1e9)
        {
            cout << "2" << endl;
            cout << a - 1 << " "
                 << "1" << endl;
            cout << a << " " << b << endl;
        }
        else
        {
            cout << "2" << endl;
            cout << a + 1 << " "
                 << "1" << endl;
            cout << a << " " << b << endl;
        }
    }
}