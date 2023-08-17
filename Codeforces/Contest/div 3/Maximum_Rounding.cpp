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
        ll f = 0, c = 0, index;
        string s;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] - '0' >= 5 && i == 0)
            {
                f = 1;
            }
            else if (s[i] - '0' >= 5)
            {
                s[i] = '0';
                s[i - 1]++;
                index = i;
            }
            else
            {
                c++;
            }
        }
        if (c == s.size())
        {
            cout << s;
        }
        else if (f == 1)
        {
            cout << "1";
            for (int i = 0; i < s.size(); i++)
            {
                cout << "0";
            }
        }
        else
        {
            for (int i = 0; i < index; i++)
            {
                cout << s[i];
            }

            for (int i = index; i < s.size(); i++)
            {
                cout << "0";
            }
        }
        cout << nl;
    }
}