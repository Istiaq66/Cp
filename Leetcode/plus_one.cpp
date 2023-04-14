///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x * 10 + digits[i];
    }



    vector<int> v;

    while (x != 0)
    {
        v.push_back(x % 10);
        x = x / 10;
    }


    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
int main()
{
    vector<int> v = {999};
    plusOne(v);
}