///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    string s;
    cin >> s;
    int n, f = 0;
    n = s.size();

    for (int i = 0, j = n - 1; i < n / 2, j >= (n - 1) / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}