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
        ll n, m = 0, a = 0;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (i == 0)
                replace(s.begin(), s.end(), c, '1');
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (s[i - 1] == '1' || s[i + 1] == '1')
                    replace(s.begin(), s.end(), c, '0');
                else if (s[i - 1] == '0' || s[i + 1] == '0')
                    replace(s.begin(), s.end(), c, '1');
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << "NO" << endl;
                a++;
                break;
            }
        }
        if (a == 0)
        {
            cout << "YES" << endl;
        }
    }
}