///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{

    long long int a, temp = 0, b;
    a = x;

    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
        temp = temp * 10 + b;
        if (temp > INT_MAX || temp < INT_MIN)
        {
            return 0;
        } 
    }
        return temp;
}

int main()
{

    int n;
    cin >> n;
    cout << reverse(n);
}