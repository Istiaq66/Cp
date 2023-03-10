///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h = 0, e = 0, l = 0, o = 0, hlw = 0;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'h')
        {
            h++;
        }
        if (h > 0 && s[i] == 'e')
        {
            e++;
        }
        if (h > 0 && e > 0 && s[i] == 'l')
        {
            l++;
        }
        if (h > 0 && e > 0 && l > 1 && s[i] == 'o')
        {
            o++;
        }
        if (h > 0 && e > 0 && l > 1 && o > 0)
        {
            hlw++;
        }
    }
    if (hlw)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}