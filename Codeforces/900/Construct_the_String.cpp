///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c = 0;
        cin >> n >> a >> b;
        string s = "abcdefghijklmnopqrstuvwxyz";
        while (n--)
        {
            if (c != b)
            {
                cout << s[c];
                c++;
            }
            else
            {
                c = 0;
                cout << s[c];
                c++;
            }
        }
        cout << endl;
    }
}