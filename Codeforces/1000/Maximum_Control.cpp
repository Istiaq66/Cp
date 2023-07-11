///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n;
    
    cin >> n;

    vector<int> a(1001);

    for (int i = 0; i < n - 1; i++)
    {
        ll x, y;

        cin >> x >> y;

        a[x]++;
        a[y]++;
    }

    ll c = 0;

    for (int i = 0; i < 1001; i++)
    {
        if (a[i] == 1)
        {
            c++;
        }
    }
    cout << c;
}