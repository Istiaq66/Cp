///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int n, c;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            while (n != 0)
            {
                if (n % 2 == 1)
                {
                    cout << "YES" << endl;
                    break;
                }
                else if (n % 2 == 0 && n == 2)
                {
                    cout << "NO" << endl;
                    break;
                }
                n = n / 2;
            }
        }
    }
}