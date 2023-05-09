///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, max = INT_MIN, c = 0;

    cin >> n;
    vector<string> v;
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());

    string r = v[0];

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            c++;
            if (max < c)
            {
                max = c;
                r = v[i];
            }
        }
        else
        {
            c = 0;
        }
    }
    cout << r;
}