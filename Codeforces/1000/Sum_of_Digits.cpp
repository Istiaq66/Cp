///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll c = 0, sum;
    string s;
    cin >> s;

    while (s.size() > 1)
    {
        sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum = sum + s[i] - 48;
        }
        s = to_string(sum);
        c++;
    }
    cout << c;
}