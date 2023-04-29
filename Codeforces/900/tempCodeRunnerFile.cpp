///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, d, sum = 0, song;
    cin >> n >> d;
    ll t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        if (i != n - 1)
        {
            sum = sum + t[i] + 10;
        }
        else
        {
            sum = sum + t[i];
        }
    }

    if (sum <= d)
    {
        song = d - sum;
        song = song / 5;
        cout << song * 5 << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}