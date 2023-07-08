///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll k;
    cin >> k;
    while (k--)
    {
        ll n, f = 0;
        cin >> n;
        string s, t, s2, t2;
        cin >> s >> t;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                s2.push_back(s[i]);
                t2.push_back(t[i]);
                f++;
            }
        }

        if (f == 2 && s2[0] == s2[1] && t2[0] == t2[1])
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}