///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

int gcd(int a, int b)
{
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], j = 0, k = 0, odd[n], even[n], ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even[j] = a[i];
                j++;
            }
            else if (a[i] % 2 == 1)
            {
                odd[k] = a[i];

                k++;
            }
        }

             for (int i = 0; i < j; i++)
        {
            ans = ans + (n - i - 1);
        }

        for (int i = 0; i < k; i++)
        {

            for (int j = i + 1; j < k; j++)
            {
                if (__gcd(odd[i], (2 * odd[j])) > 1)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}