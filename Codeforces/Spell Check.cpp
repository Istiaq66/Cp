///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, c;
        c = "Timur";

        cin >> n >> s;

        sort(c.begin(), c.end());
        sort(s.begin(), s.end());

        if (n == 5)
        {
            if (c == s)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}