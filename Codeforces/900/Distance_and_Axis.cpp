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
        ll n, k;
        cin >> n >> k;
        if (n > k)
        {
            if (n % 2 == 0)
            {
                if (k % 2 == 0)
                {
                    cout << "0" << endl;
                }
                else
                {
                    cout << "1" << endl;
                }
            }
            else
            {
                if (k % 2 == 0)
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "0" << endl;
                }
            }
        }
        else if (n <= k)
        {
            cout << k - n << endl;
        }
    }
}