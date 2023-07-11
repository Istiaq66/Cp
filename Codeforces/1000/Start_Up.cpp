///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string s = "AHIMOTUVWXY";
    string q;
    ll c = 0;

    cin >> q;

    for (int i = 0; i < q.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (q[i] == s[j])
            {
                c++;
                break;
            }
        }
    }

    if (c == q.size())
    {

        string str;
        str = q;
        string str2(str.rbegin(), str.rend());
        if (str2 == q)
        {
            cout <<"YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}