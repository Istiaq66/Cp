///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int w, a, b, c;
    cin >> w;
    a = w / 2;
    c = a;
    b = a + 1;
    a = a - 1;
    if (w % 2 == 0 && c % 2 == 0)
    {
        cout << "YES";
    }
    else if (w%2 == 0 && c % 2 != 0 && a % 2 == 0 && b % 2 == 0 && a!=0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}