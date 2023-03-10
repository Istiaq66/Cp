///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, m, c = 0;

        string a, b;

        cin >> n >> m >> a >> b;

        for (int j = m - 1; j >= 0; j--)
        {
            a.push_back(b[j]);
        }

        for (int i = 0; i < n + m; i++)
        {
            if (a[i] == 'R' && a[i + 1] == 'R' || a[i] == 'B' && a[i + 1] == 'B')
            {
                c++;
            }
        }
      
        if (c <= 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}