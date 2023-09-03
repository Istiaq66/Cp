///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12}; 

    int target = 9;

    int i, j, index = -1;

    i = 0;

    j = nums.size() - 1;
    
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (nums[mid] == target)
        {
            index = mid;
            break;
        }
        else if (nums[mid] < target)
        {
            i = mid + 1;
        }
        else if (nums[mid] > target)
        {
            j = mid - 1;
        }
    }
    cout << index;
}