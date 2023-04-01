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
        ll n, c = 0, z = 0;
        cin >> s;
        n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                c++;
            }
            else if (s[i] == '1')
            {
                z++;
            }
        }
        int k = min(c, z);
        if (k % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else 
        {
            cout << "DA" << endl;
        }
    }
}