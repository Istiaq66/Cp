///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string s;
    cin >> s;
    ll o = 0, z = 0, f = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && o >= 1)
        {
            z++;
        }
        else if (s[i] == '1' )
        {
            o++;
        }

        if (z >= 6 && o >= 1)
        {
            cout << "yes";
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "no";
    }
}