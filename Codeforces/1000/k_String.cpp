///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll k;
    string s, res, r;

    cin >> k >> s;

    vector<int> frequencies(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        frequencies[s[i] - 'a']++; //  frequencies['b' - 'a']++ ==>> frequencies[1]++
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequencies[i] % k != 0)
        {
            cout << "-1";
            return 0;
        }
        else
        {
            ll times = frequencies[i] / k;
            while (times--)
            {
                res.push_back('a' + i);
            }
        }
    }

    while (k--)
    {
        r = res + r;
    }
    cout << r;
}