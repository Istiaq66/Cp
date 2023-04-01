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
        ll n;
        cin >> n;

        while (n % 2020 != 0)
        {
            if (n % 2021 == 0)
            {
                cout << "Yes" << endl;
                break;
            }
            n = n - 2021;

            if (n < 2020)
            {
                cout << "No" << endl;
                break;
            }
        }

        if (n % 2020 == 0 && n >= 2020)
        {
            cout << "Yes" << endl;
        }
    }
}