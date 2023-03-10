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
        ll n, odd = 0, even = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        cin >> n;
        ll a[n], b[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];

             if (a[i] % 2 == 0)
            {
                even++;
            }
            if (a[i] % 2 == 1)
            {
                odd++;
            }

            if (i % 2 == 0)
            {
                a[i] = a[i] + 1;
            }
            if (i % 2 == 1)
            {
                b[i] = b[i] + 1;
            }

           
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 == 0)
            {
                c1++;
            }
            else if (a[i] % 2 == 1)
            {
                c2++;
            }
            else if (b[i] % 2 == 0)
            {
                c3++;
            }
            else if (b[i] % 2 == 1)
            {
                c4++;
            }
        }
        if (even == n || odd == n)
        {
            cout << "YES"<<endl;
        }
        else if (c1 == n || c2 == n || c3 == n || c4 == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}