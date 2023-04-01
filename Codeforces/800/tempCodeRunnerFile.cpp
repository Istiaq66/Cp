///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    int a = 0, b = 0, n, l = 0, t = 0;
    string s1, s2;
    cin >> s1 >> s2;
    n = s2.size();
    for (int i = 0; i < n; i++)
    {
        if (int(s2[i]) <= 90)
        {
            s2[i] = s2[i] + 32;
        }
        if (int(s1[i]) < int(s2[i]))
        {
            l++;
            break;
        }
        else if(int(s1[i]) > int(s2[i]))
        {
            t++;
            break;
        }
    }
    if (s1 == s2)
    {
        cout << "0";
    }
    else if (l)
    {
        cout << "-1";
    }
     else if (t)
    {
        cout << "1";
    }
}