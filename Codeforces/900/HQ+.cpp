///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    int n = 0;
    string p;
    cin >> p;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            cout << "YES";
            n++;
            break;
        }
    }
    if (n == 0)
    {
        cout << "NO";
    }
}