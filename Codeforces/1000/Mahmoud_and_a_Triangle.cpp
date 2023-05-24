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
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    ll f = 0;

    for (int i = 1; i < n-1; i++)
    {
        if ((v[i - 1] + v[i]) > v[i+1])
        {
            f = 1;
            break;
        }
    }

    if (f)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}