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
        ll n;
        string s, s1;
        cin >> n >> s;
        vector<string> v;
        for (int i = 0; i < n - 1; i++)
        {
            s1 = s[i];
            s1 += s[i + 1];
            v.push_back(s1);
        }
        
        sort(v.begin(), v.end());


        ll u = unique(v.begin(), v.end()) - v.begin();

        cout << u << endl;
    }
}