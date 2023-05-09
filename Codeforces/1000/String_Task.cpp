///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n;)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'O' || s[i] == 'o' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'U' || s[i] == 'u')
        {
            s.erase(s.begin() + i);
        }
        else
        {
            i++;
        }
    }
    n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }

    for (int i = 0; i < n * 2;)
    {
        s.insert(s.begin() + i, '.');
        i += 2;
    }

    cout << s;
}