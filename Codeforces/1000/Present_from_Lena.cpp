///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, s;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (i != j)
                cout << " ";
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (j != i)
                cout << " ";
            cout << j;
        }
        cout << nl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (i != j)
                cout << " ";
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (j != i)
                cout << " ";
            cout << j;
        }

        cout << nl;
    }
}