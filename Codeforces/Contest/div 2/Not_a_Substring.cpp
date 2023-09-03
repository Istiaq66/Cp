//   ***   ---   ||         In the name of ALLAH        |||   ---   ***   //

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
        string s, x;
        cin >> s;
        ll n, a = 0, b = 0, f = 0;
        n = s.size();

        vector<char> v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                f++;
            }
        }


        if (s=="()")
        {
            cout << "No" << nl;
        }
        else
        {
            cout << "YES" << nl;

            if (f)
            {
                for (int i = 0; i < n; i++)
                {
                    v.push_back('(');
                    v.push_back(')');
                }

                for (auto u : v)
                {
                    cout << u;
                }
                cout << nl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    v.push_back('(');
                }
                for (int i = 0; i < n; i++)
                {
                    v.push_back(')');
                }

                for (auto u : v)
                {
                    cout << u;
                }
                cout << nl;
            }
        }
    }
}