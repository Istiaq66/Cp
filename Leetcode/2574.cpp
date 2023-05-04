///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

vector<int> diff(vector<int> v)
{
    int n = v.size();

    int left_sum = 0, right_sum = 0;

    int left[n], right[n];
    vector<int> sum[n];

    left[0] = 0;
    right[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        left_sum = left_sum + v[i];
        left[i + 1] = left_sum;
    }
    for (int i = n; i >= 1; i--)
    {
        right_sum = right_sum + v[i];
        right[i - 1] = right_sum;
    }
    for (int i = 0; i < n; i++)
    {
        sum[i].push_back((left[i] - right[i]));
        return sum[i];
    }
}

int main()
{
    vector<int> v = {10, 4, 8, 3};
   
     diff(v);
}
