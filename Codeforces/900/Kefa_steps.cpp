///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll count = 1, max = 1;

    for (int i = 0; i < n - 1; i++)
    {

        if (a[i] <= a[i + 1])
        {
          
            count++; // 1 3 4
            if (max <= count)
            {
                max = count;
            }
        }
        else if (a[i] > a[i + 1])
        {
            count = 1;
        }
    }
    cout << max;
}