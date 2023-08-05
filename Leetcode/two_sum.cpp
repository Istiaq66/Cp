///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    vector<int> nums = {3, 2, 4};

    int target = 6;

    int a[2];
    vector<int> c;
    vector<int> c2;

    c = nums;
    c2 = nums;

    int l, r = 0, n = c2.size(), x, y;

    l = n - 1;

    sort(c.begin(), c.end());

    while (l > r)
    {
        if (c[l] + c[r] == target)
        {
            x = c[r];
            y = c[l];
            break;
        }
        else if (c[l] + c[r] > target)
        {
            l--;
        }
        else if (c[l] + c[r] < target)
        {
            r++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (c2[i] == x)
        {
            a[0] = i;
        }
        if (c2[i] == y)
        {
            a[1] = i;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        cout << a[i];
    }
}