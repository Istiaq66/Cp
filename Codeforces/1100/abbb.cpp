//   ***   ---   ||         In the name of ALLAH        |||   ---   ***   //

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
        vector<char> v;

        v.push_back(s[0]);

        int j = 0;

        for (int i = 1; i < s.size(); i++)
        {

            if (v.size() == 0)
            {
                v.push_back(s[i]);
            }
            else if (s[i] == 'B')
            {
                v.pop_back();
            }
            else
            {
                v.push_back(s[i]);
            }
        }
        cout << v.size() << nl;
    }
}