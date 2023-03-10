///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int 
#define     nl   "\n"
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll  n, count = 1, r;
        bool tp = false;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                count++;
                if (count == 3)
                {
                    tp = true;
                    r = a[i];
                    break;
                }
            }
            else if (a[i] != a[i + 1])
            {
                count = 1;
            }
        }
        if (tp == true)
        {
            cout << r << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}

