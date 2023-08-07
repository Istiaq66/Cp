///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    vector<int> nums1 = {2, 2, 3, 0, 0, 0};
    vector<int> nums2 = {1, 5, 6};

    int m = 3, n = 3;

    int x = m - 1, y = n - 1, last = (m + n) - 1;

    while (x >= 0 && y >= 0)
    {
        if (nums1[x] <= nums2[y])
        {
            nums1[last] = nums2[y];
            y--;
        }
        else if (nums1[x] >= nums2[y])
        {
            nums1[last] = nums1[x];
            x--;
        }
        last--;
    }

    while (y >= 0)
    {
        nums1[last] = nums2[y];
        y--;
        last--;
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << nums1[i] << " ";
    }
}