///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b;
    for (int i = 1; i < 1000000; i++)
    {
        a = a * 3;
        b = b * 2;
        if (a > b)
        {
            cout<<i;
            break;
        }
    }
     
}