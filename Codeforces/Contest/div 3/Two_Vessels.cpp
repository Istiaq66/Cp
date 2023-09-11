///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        double diff;
        if (a > b)
        {
            diff = a - b;
        }
        else
        {
            diff = b - a;
        }
        diff = diff / 2;
        cout << ceil(diff / c) << nl;
    }
}