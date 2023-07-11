///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

void moveZeroes(vector<int> &nums)
{

    int n = nums.size();
    int j = 1;

    for (int i = 0; i < n;)
    {
        if (nums[i] != 0 && j < n)
        {
            i++;
            j++;
        }
        else if (j < n && nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
        else if ( j < n && nums[j] == 0)
        {
            j++;
        }

        if (j == n)
        {
            break;
        }
    }

}
int main()
{

    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
}