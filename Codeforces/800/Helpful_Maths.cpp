///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string s, c;
    ll j = 0;
    cin >> s;
    c.insert(c.begin() + j, s[0]);
    j++;

    for (int i = 1; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            c.insert(c.begin() + j, s[i]);
            j++;
        }
    }
    sort(c.begin(), c.end());

    for (int i = 0; i <= s.size() / 2; i++)
    {
        if (i != 0)
        {
            cout << "+" << c[i];
        }
        else if (i == 0)
        {
            cout << c[i];
        }
    }
}
