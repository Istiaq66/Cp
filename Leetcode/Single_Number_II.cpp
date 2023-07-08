///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

int singleNum(vector<int> &nums)
{
    vector<int> v;
    v = nums;
    int x = 0;
    int r;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {

        while (v[i] == v[i + 1])
        {
            x++;
            i++;
        }
        if (x == 0)
        {
            r = v[i];
         
        }
        else
        {
            x = 0;
        }
    }
    return r;
    
}

int main()
{

    vector<int> nums = {2,2,3,2};
    cout << singleNum(nums);
}