///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ll count = 0, n, m;
    cin >> n >> m;
    for (int i = 1;; i++)
    {
        if (n - i == 0)
        {
            break;
        }
        if (m - i == 0)
        {
            break;
        }
        count++;
    }
    if (count % 2 == 0)
    {
        cout << "Akshat";
    }
    else if (count % 2 == 1)
    {
        cout << "Malvika";
    }
}