///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n;
        if (s1.size() > s2.size())
        {
            n = s1.size();
        }
        else
        {
            n = s2.size();
        }

        for (int i = 0; i < n; i++)
        {
            if (s1.size() > i)
            {
                cout << s1[i];
            }
        
            if (s2.size() > i)
            {
                cout << s2[i];
            }
        }
        cout << nl;
    }
}