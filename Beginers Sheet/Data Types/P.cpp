///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    x=x/1000;
    if (x % 2 == 0)
    {
        cout << "EVEN";
    }
    else if (x % 2 == 1)
    {
        cout << "ODD";
    }
}