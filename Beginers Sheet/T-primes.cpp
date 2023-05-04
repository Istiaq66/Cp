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
        long long int n, count = 0;
        cin >> n;

        for (int i = 2; i <= ceil(sqrt(n)); i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}