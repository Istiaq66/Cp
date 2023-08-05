///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    string s;

    cin >> s;

    vector<char> v;

    for (int i = 0; i < s.size(); i++)
    {
        if (v.size() == 0)
        {
            v.push_back(s[i]);
        }
        else if (v[i - 1] == '(' && s[i] == ')')
        {
            v.pop_back();
        }
        else if (v[i - 1] == '{' && s[i] == '}')
        {
            v.pop_back();
        }
        else if (v[i - 1] == '[' && s[i] == ']')
        {
            v.pop_back();
        }
        else
        {
            v.push_back(s[i]);
        }
    }

    if (v.size() == 1)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}