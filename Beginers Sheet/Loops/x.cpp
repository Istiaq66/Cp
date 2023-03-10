///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a = 1, n, p = 1, c = 0;
        cin >> n;

        while (n != 0)
        {
            if (n % 2 == 1)
            {
                c++;
            }
            n = n / 2;
        }

        while (c != 1)
        {
            p = 2 * p;
            a += p;
            c--;
        }
        
        cout << a << endl;
    }
}