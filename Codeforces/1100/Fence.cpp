//   ***   ---   ||         In the name of ALLAH        |||   ---   ***   //

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, k, c = 0;
    cin >> n >> k;
    ll h[n], min, indx;

    vector<ll> sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    sum[0] = h[0];

    for (int i = 1; i < n; i++)
    {
        sum[i] = h[i] + sum[i - 1];
    }

    min = sum[k - 1];
    indx = 1;
    

    for (int i = k; i < n; i++)
    {
        if (sum[i] - sum[i - k] < min)
        {
            min = sum[i] - sum[i - k];
            indx = i - k + 2;
        }
    }
    cout << indx;
}