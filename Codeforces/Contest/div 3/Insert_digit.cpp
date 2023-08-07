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
        ll n, a = 0, j = 0;
        string s, r;
        char m;
        cin >> n >> m >> s;
        for (int i = 0; i < n;)
        {
            if (s[i] < m && a == 0)
            {
                r.insert(r.begin() + j, m);
                a = 1;
                j++;
            }
            else
            {
                r.insert(r.begin() + j, s[i]);
                j++;
                i++;
            }
        }

        if (a == 0)
        {
            r.insert(r.end(), m);
        }
        cout << r << endl;
    }
}