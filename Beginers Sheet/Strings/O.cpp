#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        int f = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (s[j] > s[j + 1])
            {
                f = 1;
                swap(s[j], s[j + 1]);
            }
        }
        if (f == 0)
        {
            break;
        }
    }

    cout << s;
}