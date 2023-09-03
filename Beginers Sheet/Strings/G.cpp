///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string s;
    cin >> s;
    char c;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            c = s[i] + 32;
            cout << c;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            c = s[i] - 32;
            cout << c;
        }
        else if (s[i] == ',')
        {
            cout << " ";
        }
    }
}