///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

string remov(string z)
{

    z.erase(remove(z.begin(), z.end(), '0'), z.end());
    return z;
}

int main()
{

    ll a, b;

    cin >> a >> b;

    ll c = a + b;

    string s, x, y;

    s = to_string(c);
    x = to_string(a);
    y = to_string(b);

    x = remov(x);
    y = remov(y);
    s = remov(s);

    a = stoi(x);
    b = stoi(y);
    c = stoi(s);



    if ((a + b) == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}