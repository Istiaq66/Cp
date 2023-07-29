///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string x, y;

    ll a = 0, B = 0, b = 0, u = 0, l = 0, r = 0, s = 0;

    y = "Bulbasaur";

    cin >> x;

    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 'B')
        {
            B++;
        }
        else if (x[i] == 'a')
        {
            a++;
        }
        else if (x[i] == 'b')
        {
            b++;
        }
        else if (x[i] == 'u')
        {
            u++;
        }
        else if (x[i] == 'r')
        {
            r++;
        }
        else if (x[i] == 's')
        {
            s++;
        }
        else if (x[i] == 'l')
        {
            l++;
        }
    }

    if (a == u)
    {
        a = a / 2;
        u = u / 2;
    }
    else
    {
        a = min(a, u);
        a = a / 2;
    }

    if (B == b && b == r && r == l && l == s)
    {
        cout << min(B, a);
    }
    else
    {
        B = min(B, b);
        r = min(B, r);
        l = min(r, l);
        s = min(s, l);
        cout << min(s, a);
    }
}