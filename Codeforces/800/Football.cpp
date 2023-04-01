///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool a, b;
    a = false;
    b = false;
    cin >> s;
    int n, c1 = 0, c0 = 0;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            c1++;
            if (c1 == 6)
            {
                cout << "YES";
                a = true;
                break;
            }
        }
        else if (s[i] == '0' && s[i + 1] == '0')
        {
            c0++;
            if (c0 == 6)
            {
                cout << "YES";
                b = true;
                break;
            }
        }
        else
        {
            c1 = 0;
            c0 = 0;
        }
    }
    if (a == false && b == false)
    {
        cout << "NO";
    }
}