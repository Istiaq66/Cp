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
        string x1, x2;
        ll p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        while (x1[x1.size() - 1] == '0')
        {
            p1++;
            x1.pop_back();
        }
        while (x2[x2.size() - 1] == '0')
        {
            p2++;
            x2.pop_back();
        }

        ll a = x1.size() + p1;
        ll b = x2.size() + p2;

        if (a == b)
        {
            if (x1 > x2)
            {
                cout << ">" << nl;
            }
            else if (x1 < x2)
            {
                cout << "<" << nl;
            }
            else if (x1 == x2)
            {
                cout << "=" << nl;
            }
        }

        else if (a > b)
        {
            cout << ">" << nl;
        }
        else if (a < b)
        {  
            cout << "<" << nl;
        }
    }
}