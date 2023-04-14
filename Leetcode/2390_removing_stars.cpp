///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

string removeStars(string s)
{

    string c;
    int j = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            c.pop_back();
        }
        else
        {
            c.push_back(s[i]);
        }
    }
    return c;
}
int main()
{
    string s;
    cin >> s;
    cout << removeStars(s);
}