///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

int main()
{

    vector<long long int> v;
    ll a, b, c, r1, r2, r3, r4, r5, r6;
    cin >> a >> b >> c;
    r1 = (a * b) + c;
    r2 = (a + b) * c;
    r3 = a + (b * c);
    r4 = a * (b + c);
    r5 = a * b * c;
    r6 = a + b + c;
    v = {r1, r2, r3, r4, r5, r6};
    sort(v.begin(), v.end());
    cout << v[v.size() - 1];
}