///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    string s;
    cin >> s;
    ll c = 0, k = 0, j = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            c++;
        }
    }
    if (s[0] >= 65 && s[0] <= 90)
    {
        k++;
    }

    if (c + k == s.size())
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
        cout << s;
    }
    else if (c == s.size() - 1 && k < 1)
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
        if (s[0] >= 97 && s[0] <= 122)
        {
            s[0] = s[0] - 32;
        }
        cout << s;
    }
    else
    {
        cout << s;
    }
}