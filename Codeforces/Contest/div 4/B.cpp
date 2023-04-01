///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

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
        int m = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                m = m + a[i];
            }
            else if (a[i] % 2 == 1)
            {
                b=b+a[i];
            }
        }
        if(m>b){
           cout<<"YES"<<endl;
        }
        else{
              cout<<"NO"<<endl;
        }
    }
}