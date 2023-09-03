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
        string s;
        cin >> s;
        if (s.size() <= 10)
        {
            cout << s << nl;
        }
        else
        {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << nl;
        }
    }
}