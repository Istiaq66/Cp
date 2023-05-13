///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, m;
    cin >> n >> m;
    string x, y;
    vector<pair<string, string>> s;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        s.push_back(make_pair(x, y));
    }

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        for (int j = 0; j < m; j++)
        {
            if (x == s[j].first || x == s[j].second)
            {
                if (s[j].first.size() < s[j].second.size())
                {
                    cout << s[j].first;
                }
                else if (s[j].first.size() > s[j].second.size())
                {
                    cout << s[j].second;
                }
                else if (s[j].first.size() == s[j].second.size())
                {
                    cout << s[j].first;
                }
            }
        }
        cout << " ";
    }
}