///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll c = 0;
    string s, t, x = "aeiou";
    cin >> s >> t;

    ll n;
    if (s.size() == t.size())
    {
        n = s.size();

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j] == x[i])
                {
                    s[j] = '1';
                }
                if (t[j] == x[i])
                {
                    t[j] = '1';
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (t[j] != '1')
            {
                t[j] = '0';
            }
            if (s[j] != '1')
            {
                s[j] = '0';
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (s[j] != t[j])
            {
                c++;
            }
        }

        if (c)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
    }
    else
    {
        cout << "No";
    }
}