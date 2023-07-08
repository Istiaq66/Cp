///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, cnt = 1;

    cin >> n;

    char a[n][n];
    char x, y;
    vector<int> v(26);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            v[a[i][j] - 'a']++;
        }
    }

    ll m = n + (n - 1);

    ll c1 = 1, c2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        ll j = i;
        if (a[i][j] == a[i + 1][j + 1])
        {
            c1++;
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        ll j = n-1-i;
        if (a[j][i] == a[j+1][i-1])
        {
            c2++;
        }
    }

    x = a[0][0];
    y = a[0][1];
    if (v[x - 'a'] == m && c1 == n && c2 == n - 1)
    {
        if (v[y - 'a'] == (n * n) - m)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}