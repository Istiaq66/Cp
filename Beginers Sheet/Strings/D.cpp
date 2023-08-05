//   ***   ---   ||         In the name of ALLAH        |||   ---   ***   //

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << nl;
    cout << a + b << nl;

    swap(a[0], b[0]);
    cout << a << " " << b;
}