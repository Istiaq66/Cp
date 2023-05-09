///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll x, c = 0;
    cin >> x;
    while (x != 0)
    {
        if (x % 2 == 1)
        {
            c++;
        }
        x = x / 2;
    }
    cout << c;
}


/* for 7
1st din 1 ta => 4 (3rd dine)
2nd din 1 ta => 2 (3rd dine)
3rd din 1 ta => 1 (3rd dine)

for 6
1st din 1 ta => 4 (3rd dine)
2nd din 1 ta => 2 (3rd dine) */
