///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    string k, n, s;
    k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> n >> s;
    if (n == "R")
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < k.size(); j++)
            {
                if (s[i] == k[j])
                {
                    s[i] = k[j - 1];
                    break;
                }
            }
        }
    }
    else if (n == "L")
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < k.size(); j++)
            {
                if (s[i] == k[j])
                {
                    s[i] = k[j + 1];
                    break;
                }
            }
        }
    }

    cout << s;
}