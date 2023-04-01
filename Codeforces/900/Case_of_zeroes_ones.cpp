///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, z = 0, o = 0, c;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z++;
        }
        else if (s[i] == '1')
        {
            o++;
        }
    }
    c = max(z, o) - min(z, o);
    cout<<c;
}