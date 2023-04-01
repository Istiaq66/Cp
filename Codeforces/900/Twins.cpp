///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n, sum, sum2 = 0, c = 0;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n,greater<int>());

    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 + a[i]; // 1 2 2

        sum = 0;
        for (int j = n - 1; j > i; j--) // 3 -1 = a[2]=2+
        {
            sum = sum + a[j];
        }

        if (sum2 > sum)
        {
            c = i + 1;
            break;
        }
    }
    cout << c;
}