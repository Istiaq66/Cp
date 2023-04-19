///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int divide(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, n, k;
        cin >> n >> k;

        a = divide(n);
        n = n + a;

        for (int i = 1; i < k; i++)
        {
            n = n + 2;
        }
        cout << n << endl;
    }
}