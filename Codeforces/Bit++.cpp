///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, count = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "X++" || s == "++X")
        {
            count++;
        }
        else if (s == "--X" || s == "X--")
        {
            count--;
        }
    }
    cout << count << endl;
}