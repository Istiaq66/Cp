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
        ll n, j = 0, c = 0;
        cin >> n;
        ll a[n], b[n];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n;)
        {
            if (a[i] <= max(a[i], a[i + 1]) && c == 0)
            {
                b[j] = a[i];
                j++;
                c = 1;
            }
            else if (a[i] >= max(a[i], a[i + 1]))
            {
                b[j] = a[i + 1];
                j++;
                i++;
            }
            else
            {
                b[j] = a[i];
                j++;
                i++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}