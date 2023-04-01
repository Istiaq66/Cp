///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

int reverse(int n)
{
    int rem = 0;
    while (n!=0)
    {
        rem = (n % 10) + rem*10 ;
        n=n/10;
    }
    return rem;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, a = 0;
        cin >> x;
        if (x > 45)
        {
            cout << "-1" << endl;
        }
        else if (x <= 9)
        {
            cout << x << endl;
        }
        else
        {
            for (int i = 9; i >= 1; i--)
            {
                if (i <= x)
                {
                    x = x - i;
                    a = a*10 + i;
                }
                else if (x == 0)
                {
                    break;
                }
            }

            if (x == 0)
            {
                cout <<reverse(a)<< endl;
            }
        }
    }
}