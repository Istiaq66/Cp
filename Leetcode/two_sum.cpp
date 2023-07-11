///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    vector<int> nums = {3,2,4};

    int target = abs(6);

    vector<int> a;

    int j, s, n = nums.size();

    j = n - 1;

    for (int i = 0; i < n;)
    {
        s = abs(nums[i] + nums[j]);

        if (s == target)
        {
            a.push_back(i);
            a.push_back(j);
            break;
        }
        else if (j < i)
        {
            break;
        }
        else if (s < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
}