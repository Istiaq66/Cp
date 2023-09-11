///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int s = 0, d = 0, f = 1;

    while (!v.empty())
    {
        if (v[0] < v.back())
        {

            if (f == 1)
            {
                s += v.back();
                f = 0;
            }
            else
            {
                d += v.back();
                f = 1;
            }
            v.pop_back();
        }
        else
        {

            if (f == 1)
            {
                s += v[0];
                f = 0;
            }
            else
            {
                d += v[0];
                f = 1;
            }
            v.erase(v.begin());
        }
    }
    cout << s << " " << d << nl;
}