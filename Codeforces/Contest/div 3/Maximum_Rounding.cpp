///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] >= '5')
            {
                s[i] = '0';
                s[i - 1]++;
            }
        }
        cout << s << nl;
    }
}