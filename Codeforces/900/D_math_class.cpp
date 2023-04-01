///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

ll gcd(ll a, ll b)
{
    if((a%b)==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            temp = gcd(temp, a[i]);
        }
        cout << a[n - 1] / temp << endl;
    }
}