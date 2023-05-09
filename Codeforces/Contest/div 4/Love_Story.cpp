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
        ll c = 0;
        string z;
        cin >> z;
        string s = "codeforces";
        for (int i = 0; i < s.size(); i++)
        {
            if (z[i] != s[i])
            {
                c++;
            }
        }
        cout << c << nl;
    }
}
