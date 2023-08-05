///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int r = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (target == nums[i])
        {
            r = i;
        }
    }
    return r;
}