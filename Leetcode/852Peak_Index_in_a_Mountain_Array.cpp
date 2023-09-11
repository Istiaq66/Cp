///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    vector<int> arr = {0, 3, 10, 8, 5, 2};

    int l, r, mid, indx;
    l = 0;
    r = arr.size() - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            indx = mid;
            break;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << indx;
}