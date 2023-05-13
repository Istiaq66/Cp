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
        ll n = s.size();

        ll c = 0;
        ll x = 0;

        sort(s.begin(), s.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                if (s[i + 1] == s[i + 2])
                {
                    x++;
                    break;
                }
            }
        }

        if (x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}