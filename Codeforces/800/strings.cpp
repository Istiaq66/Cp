///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    string s;
    ll c = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        c = c + (s[i]-48);
    }
    cout << c;
}