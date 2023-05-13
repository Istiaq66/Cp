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
        ll n, c = 0, x = 0, y = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                x++;
            }
            else if (s[i] == ')')
            {
                y++;
            }
            if (y > x)
            {
                c++;
                x = 0;
                y = 0;
            }
        }
        cout << c << endl;
    }
}