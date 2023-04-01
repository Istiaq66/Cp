///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0, b = 0;
        cin >> n;
        if (n == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            while (n != 1)
            {
                if (n % 6 == 0)
                {
                    n = n / 6;
                    c++;
                }
                else if ((n * 2) % 6 == 0)
                {
                    n = (n * 2) / 6;
                    c = c + 2;
                }
                else
                {
                    cout << "-1"<<endl;
                    b++;
                    break;
                }
            }
            if (b == 0)
            {
                cout << c << endl;
            }
        }
    }
}