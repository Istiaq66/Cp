///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll n;
    bool find;
    cin >> n;
    ll a[1000] = {1, 1};
    for (int i = 2; i < 1000; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    for (int i = 1; i <= n; i++)
    {
        find = 0;
        for (int j = 0; j < 1000; j++)
        {

            if (i == a[j])
            {
                cout << "O";
                find = 1;
                break;
            }
        }
        if (find == 0)
        {
            cout << "o";
        }
    }
}