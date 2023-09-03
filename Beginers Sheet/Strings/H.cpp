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
        ll c = 0;
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == '1' && s[i - 1] == '0' && s[i + 1] == '0' || s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1')
            {
                c++;
            }
        }
        if (c)
        {
            cout << "Good" << nl;
        }
        else
        {
            cout << "Bad" << nl;
        }
    }
}