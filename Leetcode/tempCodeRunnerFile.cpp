///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

string removeStars(string s)
{
    ll n = s.size();
    
    for (int i = 0; i < n;)
    {
        if (s[i] == '*')
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i - 1);
            i=i-2;
        }
        else
        {
            i++;
        }
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    cout << removeStars(s);
}