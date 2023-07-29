///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    vector<int> nums1 = {-1, -2};
    vector<int> nums2 = {1, 2};

    vector<int> v;
    v = nums1;

    for (int i = 0; i < nums2.size(); i++)
    {
        v.push_back(nums2[i]);
    }
    sort(v.begin(), v.end());

    ll n = v.size();
    if (n % 2 == 1)
    {
        int i;
        i = ceil((double)n / 2);
        cout << v[i - 1];
    }
    else
    {
        ll a, b;
        a = (n / 2);
        b = (a+1)-1;
        a = a - 1;
        cout << (v[a] + v[b]) / 2;
    }
}