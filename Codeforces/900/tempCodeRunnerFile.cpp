///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, c = 0;
    cin >> n;

    string s = to_string(n);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            c++;
        }
    }
    if (c == n)
    {
        cout << "YES";
    }
    else if (n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}