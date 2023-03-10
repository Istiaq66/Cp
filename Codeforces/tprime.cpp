///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t, count, a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        count = 0;
        cin >> t;
        a = sqrt(t);
        for (int i = 2; i < t - 1; i++)
        {
            if (a % i == 0 && a * a == t)
            {
                count++;
            }
          
        }
        if (count == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}