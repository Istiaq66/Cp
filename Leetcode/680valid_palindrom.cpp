///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

bool validPalindrome(string s)
{
    long long int i = 0, j, c = 0;
    j = s.size() - 1;
    while (i <= j)
    {
        if (s[i + 1] == s[j])
        {
            i++;
            c++;
        }
        else if (s[i] == s[j - 1])
        {
            j--;
            c++;
        }

        i++;
        j--;
    }
    cout << c <<i<<j<< endl;

    if (c > 1)
    {
        return false;
    }
    else
        return true;
}

int main()
{
    string s;
    cin >> s;
    cout << validPalindrome(s);
}