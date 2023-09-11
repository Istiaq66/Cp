///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string s;
    int f = 0;
    while (cin >> s)
    {
        reverse(s.begin(), s.end());
        if (f)
        {
            cout << " ";
        }
        f = 1;
        cout << s;
    }
}