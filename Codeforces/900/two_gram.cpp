///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    string s;
    char a, b;
    ll n, y = 0, c, c2, maxx = INT_MIN;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        c = 0;
        c2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1] && i != j)
            {
                c++;
            }
            else if (s[i] == s[j + 1] && s[i + 1] == s[j] && i != j)
            {
                c2++;
            }
        }

        if (c >= c2 && c > maxx)
        {
            maxx = c;
            a = s[i];
            b = s[i + 1];
        }
        else if (c2 >= c && c2 > maxx)
        {
            maxx = c;
            a = s[i + 1];
            b = s[i];
        }
    }
    cout << a << b;
}