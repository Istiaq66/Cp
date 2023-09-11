///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
ll a[26];

int main()
{

    string s;
    cin >> s;
    sort(s.begin(), s.end());

    vector<char> c;

    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'a']++;
        if (c.empty())
        {
            c.push_back(s[i]);
        }
        else if (c.back() != s[i])
        {
            c.push_back(s[i]);
        }
    }

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " : " << a[c[i] - 'a'] << nl;
    }
}