///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    vector<int> nums = {1, 2, 3, 4};

    int n = nums.size();
    vector<int> v;
    v = nums;
    sort(v.begin(), v.end());

    int f = 0;

    for (int i = 0; i < n-1; i++)
    {
        if (v[i] == v[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << false;
    }
    else
    {
        cout << true;
    }
}