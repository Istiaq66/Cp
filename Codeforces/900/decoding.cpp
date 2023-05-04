#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    string c = "";

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                c = s[i] + c;
            }
            else
            {
                c = c + s[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                c = s[i] + c;
            }
            else
            {
                c = c + s[i];
            }
        }
    }

    cout << c;
}