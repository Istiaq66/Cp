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
        int s;
        cin >> s;
        int cashback = 0;
        int tmp = s;
        while (tmp >= 10)
        {
            cashback = cashback + tmp / 10;
            tmp = tmp / 10 + tmp % 10;
        }
        cout << s + cashback << endl;
    }
}