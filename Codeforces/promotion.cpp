///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n, m, st, nd, rd, rt;
        cin >> a >> b >> n >> m;

        if (n <= m + 1)
        {
            st = m * a;
            nd = n * a;
            rd = n * b;
            if (st >= nd && nd <= rd)
            {
                st = nd;
            }
            else if (st >= rd && rd <= nd)
            {
                st = rd;
            }
        }
        else if (n > m + 1)
        {

            st = n / (m + 1);
            nd = n % m + 1;
            st = (st * m * a) + min((nd * a), (nd * b));
        }

        cout << st << endl;
    }
}