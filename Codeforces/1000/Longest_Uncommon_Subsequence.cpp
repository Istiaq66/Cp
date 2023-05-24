///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string a, b;
    cin >> a >> b;
  

    ll x = max(a.size(), b.size());

      if (a == b)
    {
        cout << -1;
    }
    else
    {
        cout << x;
    }
}