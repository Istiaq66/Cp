///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string s;
    cin >> s;
    ll n = 0;
    for (int i = 0; i < s.size();)
    {

        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (n)
            {
                cout << " ";
                n = 0;
            }
            i = i + 3;
        }
        else
        {
            cout << s[i];
            n++;
            i++;
        }
    }
}