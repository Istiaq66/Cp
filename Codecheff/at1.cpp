#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;

    int j = r;
    int k = p;

    int a[n];
    int b[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = p; i <= q; i++)
    {

        if (j <= s)
        {
            b[i] = a[j];
            j++;
        }
    }

    for (int i = r; i <= s; i++)
    {

        if (k <= q)
        {
            b[i] = a[k];
            k++;
        }
    }

    for (int j = 1; j <= n; j++)
    {
        cout << b[j] << " ";
    }
}