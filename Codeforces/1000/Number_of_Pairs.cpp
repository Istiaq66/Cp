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
        ll n, k;
        vector<int> A(26);
        vector<int> a(26);
        string s;

        cin >> n >> k >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                A[s[i] - 'A']++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                a[s[i] - 'a']++;
            }
        }

        ll sum = 0, ex = 0;

        for (int i = 0; i < 26; i++)
        {
            sum += min(a[i], A[i]);
            a[i] = abs(a[i] - A[i]);
            ex += a[i] / 2;
        }
        sum += min(ex, k);
        cout << sum << nl;
    }
}